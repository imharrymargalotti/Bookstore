//
// Created by Eli Wennberg Smith on 12/14/17.
//
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "inventory.h"
#include "fstream"
#include "book.h"
#include <cctype>
using namespace std;

inventory::inventory(){
    bookArr = new bookList(30);
}

void inventory::readIn() {
    std::string readFile = "inventory.txt";
    std::string book[5];
    std::ifstream infile;
    infile.open(readFile);
    if (!infile) {
        std::cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }
    std::string ignore;
    getline(infile,ignore);


    while(!infile.eof()) {
        std::string author;
        getline(infile, author);

        std::string title;
        getline(infile, title);

        std::string wantValstr;
        getline(infile, wantValstr);
        int wantVal = stoi(wantValstr);

        std::string hasValstr;
        getline(infile, hasValstr);
        int hasVal = stoi(hasValstr);

        //CONSTRUCT BOOK
        ::book *tempBook = new class book(author, title, wantVal, hasVal);
        bookArr->insertInOrder(tempBook);

        //WAITLIST
        std::string waitlist;
        getline(infile, waitlist);
        int listSize = stoi(waitlist);

            for (int i = 0; i < listSize; ++i) {
                std::string name;
                std::string phone;
                std::string email;
                std::string contact;
                getline(infile,name);
                getline(infile,phone);
                getline(infile,email);
                getline(infile,contact);

                tempBook->addToWaitlist(name,phone,email,contact);
            }
    }

    infile.close();
}

book* userInput(std::string title){
    bool flag = false;
    std::string author = "";
    if(author==""){
        cout<<"Author: ";
        getline(cin,author);

    }



    int wantVal = 0;
    cout<<"Copies Desired: ";
    std::string temp2;
    getline(cin,temp2);
    wantVal = stoi(temp2);


    int hasVal = 0;
    std::string hasvalstr;
    cout<<"Copies in stock: ";
    getline(cin,hasvalstr);
    hasVal = stoi(hasvalstr);

    book* newBook = new book(author, title, wantVal, hasVal);
    std::cout << std::endl;
    return newBook;



}

void inventory::addToList(int bookIndex){

    std::string name = "";
    if(name==""){
        cout<<"Name: ";
        getline(cin,name);

    }

    std::string phone = "";
    if(phone==""){
        cout<<"Phone Number: ";
        getline(cin,phone);

    }

    std::string email = "";
    if(email==""){
        cout<<"Email: ";
        getline(cin,email);

    }

    std::string contact = "";
    if(contact==""){
        cout<<"Contact Preference: ";
        getline(cin,contact);

    }

    bookArr->getValueAt(bookIndex)->addToWaitlist(name,phone,email,contact);
}

void inventory::inquire(std::string title){
    int index = bookArr->find(title);
    std::cout<<bookArr[index].toString()<<std::endl;
}

void inventory::listInventory(){
    if(bookArr!= nullptr){
        std::cout<<bookArr->toString()<<std::endl;
    }
}

void inventory::addBook(std::string title){
//    std::cout<<"made it line 162"<<std::endl;
    bookArr->insertInOrder(userInput(title));
}

void inventory::modify(std::string title){
    int index = bookArr->find(title);

    std::cout << "The current desired number of copies is " << bookArr->getValueAt(index)->getWantVal() << "." << std::endl;
    std::cout << "The current number of copies in inventory is " << bookArr->getValueAt(index)->getHasVal() << "." << std::endl;


    int wantVal;

    std::cout<<"Enter the new number of books desired. \n";
    std::cin>>wantVal;
    while(1)
    {
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cout<<"Please enter a valid number."<<std::endl;
            std::cin>>wantVal;
        }
        if(!std::cin.fail())
            break;
    }
    bookArr->getValueAt(index)->setWantVal(wantVal);
    std::cout<<"The new number of books desired is: "<<wantVal<<std::endl;
}

void inventory::sellBook(std::string title){
    int index = bookArr->find(title);
    if(index == -1){
        std::cout << "We currently do not have this book in stock. We will order it and add you onto the waitlist." << std::endl;
        bookArr->insertInOrder(userInput(title));
        int newindex = bookArr->find(title);
        addToList(newindex);
    }else if(bookArr->getValueAt(index)->getHasVal() == 0){
        std::cout << "This book is currently out of stock. We will add you onto the waitlist." << std::endl;
        addToList(index);
    }
    else{
        bookArr->getValueAt(index)->setHasVal(bookArr->getValueAt(index)->getHasVal() - 1);


    }
    std::cout<<"The title "<<title<<" now has "<< bookArr->getValueAt(index)->getHasVal() << " copies in stock."<<std::endl;
}

void inventory::delivery(std::string filename){
    std::string fileName = filename + ".txt";
    std::ifstream inFile(fileName);

    if(!inFile){
        std::cout<< "File Not Found"<< std::endl;
        exit(1);
    }

    while(!inFile.eof()){
        string title;
        string ordered;

        getline(inFile, title);
        getline(inFile,ordered);

        cout<< "title: "<< title <<" num ordered: "<< ordered<<endl;

        int index = bookArr->find(title);

        book* temp = bookArr->getValueAt(index);

        if(!temp->isWaitlistEmpty()) {
            cout << title << " now has more copied available " << " please notify: " << temp->firstPerson() << endl;
        }
        temp->setHasVal(temp->getHasVal()+stoi(ordered));
    }
}

void inventory::order(std::string filename){
    int size = bookArr->itemCount();
    std::string tempOrder;
    std::ofstream outf(filename + ".txt");
    for (int x = 0;x<size;x++){
        if(bookArr->getValueAt(x)->getHasVal() < bookArr->getValueAt(x)->getWantVal()){
            tempOrder+=bookArr->getValueAt(x)->getTitle() + "\n";
            int amountOrdered = bookArr->getValueAt(x)->getWantVal()-bookArr->getValueAt(x)->getHasVal();
            std::string amountOrderedString = std::to_string(amountOrdered);
            tempOrder+=amountOrderedString;
//            bookArr->getValueAt(x)->setHasVal(bookArr->getValueAt(x)->getWantVal());


            if (outf){
                outf << tempOrder;
                tempOrder = "";
            }

        }
    }outf.close();
}


void inventory::returnInvoice(std::string filename){
    filename+=".txt";
    int size = bookArr->itemCount();
    std::string outline = "";
    std::ofstream outf(filename);
    for (int x = 0;x<size;x++){
        if(bookArr->getValueAt(x)->getHasVal()>bookArr->getValueAt(x)->getWantVal()){
            int temp = bookArr->getValueAt(x)->getHasVal()-bookArr->getValueAt(x)->getWantVal();
            outline+="Title|"+bookArr->getValueAt(x)->getTitle()+"|Returned"+std::to_string(temp);
            bookArr->getValueAt(x)->setHasVal(bookArr->getValueAt(x)->getWantVal());
        }


        if (outf){
            outf << outline << std::endl;
            outline="";
        }

    }
    outf.close();
}



//user should input just the name i.e 'inventory' function will handle appending the extension
void inventory::quit(){
    std::string author;
    std::string title;
    std::string wantStr;
    std::string hasStr;
    std::string outWaitList;
    //std::string outline;
    std::string fileName="inventory.txt";
    int size = bookArr->itemCount();
    std::ofstream outf(fileName);
    for (int x = 0;x<size;x++){
        author = bookArr->getValueAt(x)->getAuthor();
        title = bookArr->getValueAt(x)->getTitle();
        wantStr = std::to_string(bookArr->getValueAt(x)->getWantVal());
        hasStr = std::to_string(bookArr->getValueAt(x)->getHasVal());
        outWaitList+=bookArr->getValueAt(x)->outWaitlist();
        if (outf){
            outf << "\n" << author << std::endl;
            outf << title << std::endl;
            outf << wantStr << std::endl;
            outf << hasStr << std::endl;
            outf << outWaitList;

            outWaitList="";
        }
    }outf.close();
}
/*outline+=bookArr->getValueAt(x)->getAuthor()+"\n"+
                bookArr->getValueAt(x)->getTitle()+"\n"+
                 std::to_string(bookArr->getValueAt(x)->getWantVal())+"\n"+
                std::to_string(bookArr->getValueAt(x)->getHasVal());
        outWaitList+=bookArr->getValueAt(x)->outWaitlist();


         outf << outline << std::endl;
          outline="";
        */