//
// Created by Eli Wennberg Smith.
//
#include "PersonNode.h"

PersonNode::PersonNode(std::string name, std::string phoneNumber, std::string email, std::string contactPreference){
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->contactPreference = contactPreference;
    next = nullptr;
}

PersonNode::PersonNode(const PersonNode& nodeToCopy){
    name = nodeToCopy.name;
    phoneNumber = nodeToCopy.phoneNumber;
    email = nodeToCopy.email;
    contactPreference = nodeToCopy.contactPreference;
    next = nullptr;
}

std::string PersonNode::getName(){
    return name;
}



std::string PersonNode::getPhone(){
    return phoneNumber;
}


std::string PersonNode::getEmail(){
    return email;
}

std::string PersonNode::getPreference(){
    return contactPreference;
}

PersonNode* PersonNode::getNext(){
    return next;
}

void PersonNode::setNext(PersonNode* newNext){
    next = newNext;
}

std::string PersonNode::toString() {
    std::string listString = "Name: ";
    listString+= getName();
    listString+=" Phone: ";
    listString+= getPhone();
    listString+=" Email: ";
    listString+= getEmail();
    listString+=" Contact Preference: ";
    listString+= getPreference();
    return listString;
}