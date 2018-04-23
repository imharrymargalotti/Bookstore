//
// Created by Harry Margalotti on 12/2/17.
//
#include "book.h"
#include "PersonQueue.h"

book::book(std::string author, std::string title, int wantVal, int hasVal){
    this->author = author;
    this->title = title;
    this->wantVal = wantVal;
    this->hasVal = hasVal;
    this->waitList = new PersonQueue<PersonNode>();
}


//destructor
book::~book() {
    while(this->waitList->front != nullptr) {
        PersonNode* deletePtr = this->waitList->front;
        this->waitList->front = this->waitList->front->getNext();
        delete deletePtr;
    }
}

//copy constructor
book::book(const book &bookToCopy){
    this->author = bookToCopy.author;
    this->title = bookToCopy.title;
    this->wantVal = bookToCopy.wantVal;
    this->hasVal = bookToCopy.hasVal;
    this->waitList = new PersonQueue<PersonNode>(*bookToCopy.waitList);

}

//accessors
std::string book::getAuthor(){
    return author;
}

std::string book:: getTitle(){
    return title;
}


int book:: getWantVal(){
    return wantVal;
}


int book:: getHasVal(){
    return hasVal;
}


//tostring for a book
std::string book:: toString(){

    if(this != nullptr){
        std::string stringWant=std::to_string(wantVal);
        std::string stringHas=std::to_string(hasVal);
        std::string bookStuff="Title: ";
        bookStuff+=title + " Author: " +author + " Want Val: "+stringWant + " Has Val: "+stringHas;
        return bookStuff;
    }else return "null";

}

std::string book::firstPerson(){
    if(waitList->front != nullptr) {
        return waitList->front->toString();
    }else{
        throw std::out_of_range("Waitlist is Empty");
    }
}

void book::addToWaitlist(std::string name, std::string phoneNumber, std::string email, std::string contactPreference){
    waitList->enqueue(name,phoneNumber,email,contactPreference);
}

void book::setAuthor(const std::string &authorIn){
    author=authorIn;
}

void book::setTitle(const std::string &titleIn){
    title=titleIn;
}

void book::setWantVal(int wantValIn){
    wantVal=wantValIn;
}

void book::setHasVal(int hasValIn){
    hasVal=hasValIn;
}
bool book::isWaitlistEmpty(){
    return waitList->isEmpty();
}