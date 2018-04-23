//
// Created by Toby Dragon on 10/24/17.
//
#include "PersonQueue.h"

//Creates an empty queue
template <class T>
PersonQueue<T>::PersonQueue(){
    front = nullptr;
    end = nullptr;
    size = 0;
}

//Copy Constructor
template <class T>
PersonQueue<T>::PersonQueue(const PersonQueue& queueToCopy){
    if (queueToCopy.front == nullptr){
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    else {
        PersonNode* currNode = queueToCopy.front;
        this->front = new PersonNode(currNode->getName(),currNode->getPhone(),currNode->getEmail(),currNode->getPreference());

        PersonNode* newEnd = front;
        currNode = currNode->getNext();

        while (currNode != nullptr){
            PersonNode* newNode = new PersonNode(currNode->getName(),currNode->getPhone(),currNode->getEmail(),currNode->getPreference());
            newEnd->setNext(newNode);
            newEnd = newNode;
            currNode = currNode->getNext();
        }
        end = newEnd;
        this->size = queueToCopy.size;

    }
}

//Destructor
template <class T>
PersonQueue<T>::~PersonQueue(){
    while(this->front != nullptr) {
        PersonNode* deletePtr = this->end;
        this->front = this->front->getNext();
        delete deletePtr;
        deletePtr = nullptr;
    }
}


//adds an item to the end of the queue
template <class T>
void PersonQueue<T>::enqueue(std::string name, std::string phoneNumber, std::string email, std::string contactPreference){
    PersonNode* newNode = new PersonNode(name,phoneNumber,email,contactPreference);
    //if front is nullptr, end should be nullptr too
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
    }
    size++;
}

//takes an item off the front of the queue and returns it
//throws out_of_range exception if the queue is empty
template <class T>
std::string PersonQueue<T>::dequeue(){
    if(this->front == nullptr){
        throw std::out_of_range("Queue is empty");
    } else if(this->front == this->end){
        std::string person = this->front->toString();
        delete this->front;
        this->front = nullptr;
        this->end = nullptr;
        return person;
    }else{
        std::string person = this->front->toString();
        PersonNode* temp = front;
        front = front->getNext();
        delete temp;
        temp = nullptr;
        return person;
    }
    size--;
}

//returns true if the queue has no items, false otherwise
template <class T>
bool PersonQueue<T>::isEmpty(){
    return front == nullptr;
}

template <class T>
int PersonQueue<T>::getSize(){
        return size;
}
