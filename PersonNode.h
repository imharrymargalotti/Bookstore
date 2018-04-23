//
// Created by Toby Dragon on 10/24/16.
//

#ifndef PERSONNODE_H
#define PERSONNODE_H

#include <string>

class PersonNode {

private:
    std::string name;
    std::string phoneNumber;
    std::string email;
    std::string contactPreference;
    PersonNode* next;

public:



    /**
     * creates a new node to represent people in the wailtlist
     * @param name
     * @param phoneNumber
     * @param email
     * @param contactPreference
     */
    PersonNode(std::string name, std::string phoneNumber, std::string email, std::string contactPreference);

    /**
     * copy constructor
     * @param nodeToCopy
     */
    PersonNode(const PersonNode& nodeToCopy); //only copies item, next is set to nullptr

    /**
     * gets name from node
     * @return
     */
    std::string getName();

    /**
     * gets the phone number from the node
     * @return
     */
    std::string getPhone();

    /**
     * gets the email from the node
     * @return
     */
    std::string getEmail();

    /**
     * gets the contact preference from the person
     * @return
     */
    std::string getPreference();

    /**
     * gets the next node in the queue
     * @return
     */
    PersonNode* getNext();

    /**
     * set next - mutator
     * @param newNext
     */
    void setNext(PersonNode* newNext);

    /**
     * string representation of the node.
     * @return
     */
    std::string toString();
};


#endif //PERSONNODE_H
