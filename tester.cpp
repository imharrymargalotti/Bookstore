//
// Created by Eli Wennberg Smith on 12/18/17.
//

#include <iostream>
#include "inventory.h"
#include "tester.h"


void testAddBook(){
    std::cout<<"____________________"<<std::endl;
    std::cout<<"Testing adding books to inventory"<<std::endl;
    inventory* tester = new inventory();
    book* newBook = new book("Herman Melville","Moby Dick",12,12);
    tester->bookArr->insertInOrder(newBook);

    if(tester->bookArr->getValueAt(0)->getTitle() == "Moby Dick" && tester->bookArr->getValueAt(0)->getAuthor() == "Herman Melville"){
        std::cout<<"pass"<<std::endl;
    }else{
        std::cout<<"FAIL"<<std::endl;
    }
    std::cout<<"Testing adding multiple books to inventory"<<std::endl;

    book* newBook2 = new book("Herman Melville","Moby Dick",12,12);
    tester->bookArr->insertInOrder(newBook2);

    if(tester->bookArr->getValueAt(1)->getTitle() == "Moby Dick" && tester->bookArr->getValueAt(1)->getAuthor() == "Herman Melville"){
        std::cout<<"pass"<<std::endl;
    }else{
        std::cout<<"FAIL"<<std::endl;
    }
}
void testBookMethods(){
    std::cout<<"____________________"<<std::endl;
    std::cout<<"testing book methods"<<std::endl;
    inventory* tester = new inventory();
    book* newBook = new book("Herman Melville","Moby Dick",12,12);
    std::cout<<"testing add to waitlist and get first person"<<std::endl;
    newBook->addToWaitlist("Eli","1234567890","eli@test.com","email");
    if(newBook->firstPerson() == "Name: Eli Phone: 1234567890 Email: eli@test.com Contact Preference: email"){
        std::cout<<"pass"<<std::endl;
    }else{
        std::cout<<"FAIL"<<std::endl;
    }
}

void testall(){

    testAddBook();
    testBookMethods();
}
