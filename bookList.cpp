//
// Created by Eli Wennberg Smith on 12/14/17.
//

#include <iostream>
#include "bookList.h"

bookList::bookList(int initialCapacity){

    array = new book *[initialCapacity];
    currentItemCount = 0;
    currentCapacity = initialCapacity;

    for (int i = 0; i < currentCapacity; ++i) {
        array[i] = nullptr;
    }

}
book** copyArray(book** arrayToCopy, int size){
    book** newArray=new book*[size];
    for (int i = 0; i < size ; ++i) {
        newArray[i]=arrayToCopy[i];
    }
    return newArray;
}

void bookList::doubleCapacity() {
    currentCapacity = currentCapacity * 2;
    book **newArray = new book *[currentCapacity];
    for (int i = 0; i < currentCapacity; ++i) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = nullptr;
    array = new book *[currentCapacity * 2];
    array = copyArray(newArray, currentCapacity * 2);
    delete[] newArray;
    newArray = nullptr;

}

//Destructor
bookList::~bookList() {
    for(int i=0;i<currentItemCount;i++){
        delete array[i];
    }
    array = nullptr;
    currentItemCount = 0;
}

void bookList::insertAt(book* bookToAdd, int index){


    //increases item count
    currentItemCount++;
    //throws exception
    if(index >= currentCapacity || index < 0){
        throw std::out_of_range("<Index is out of range.>");
    }else {
        //checks if array is full
        if (currentItemCount >= currentCapacity) {
            //doubles siz if it is full
            doubleCapacity();
        }

        //shifts all indexes after the index to add over one to make room
        for (int i = currentItemCount - 1; i >= index; --i) {
            array[i + 1] = array[i];
        }

        //adds the new item at the new index
        array[index] = bookToAdd;
    }






}


void bookList::insertInOrder(book* newBook){

    if(array!= nullptr) {
        if (currentItemCount == 0) {
            insertAt(newBook, 0);
        } else if (currentItemCount == 1) {
            if (newBook->getTitle() < array[0]->getTitle()) {
                insertAt(newBook, 0);
            } else {
                insertAt(newBook, 1);
            }
        } else {
            for (int i = 0; i < currentItemCount; ++i) {
                if (newBook->getTitle() < array[i]->getTitle()) {
                    insertAt(newBook, i);
                    break;
                } else if (newBook->getTitle() == array[i]->getTitle()) {
                    std::cout << newBook->getTitle() << "is already in our inventory." << std::endl;
                    break;
                }
                if (i == currentItemCount - 1 && newBook->getTitle() > array[i]->getTitle()) {
                    insertAt(newBook, currentItemCount);
                    break;
                }
            }
        }
    }else{
        array = new book *[30];
        insertAt(newBook, 0);
    }

}


book* bookList::getValueAt(int index){

    //throws exception
    if(index >= currentCapacity || index < 0){
        throw std::out_of_range("<Index is out of range.>");
    } else{
        //returns val
        return array[index];
    }

}


std::string bookList::removeValueAt(int index){
    //throws exception
    if(index >= currentCapacity || index < 0){
        throw std::out_of_range("<Index is out of range.>");
    }else{

        //out val
        std::string title = array[index]->getTitle();

        //shifts everything to remove item
        for (int i = index; i < currentItemCount; ++i) {
            array[i]=array[i+1];
        }

        //decreases valid item count
        currentItemCount--;

        //return
        return title;
    }

}


bool bookList::isEmpty(){
    if(currentItemCount == 0){
        return true;
    }else{
        return false;
    }
}


int bookList::itemCount(){
    return currentItemCount;
}



std::string bookList::toString(){
    if(array != nullptr){
        std::string fullList = "";
        for(int i=0;i<currentItemCount;i++){
            fullList += array[i]->toString();
            fullList+="\n -------------------------------- \n";
        }
        return fullList;
    }else{
        return "no book list";
    }

}


int bookList::find(std::string titleToFind){
    for (int i = 0; i < currentItemCount; ++i) {
        if(array[i]->getTitle() == titleToFind){
            return i;
        }
    }
    return -1;
}
std::string book:: outWaitlist(){

        std::string returnString = "";
        PersonNode* current = waitList->front;
        returnString+= std::to_string(waitList->size);
        while (current!= nullptr){
            returnString+="\n"+current->getName()+"\n"+current->getPhone()+"\n"+current->getEmail()+"\n"+current->getPreference();
            current = current->getNext();
        }
        return returnString;


}
