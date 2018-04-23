//
// Created by Eli Wennberg Smith on 12/14/17.
//

#ifndef STACKSANDQUEUES_PERSON_QUEUE_H
#define STACKSANDQUEUES_PERSON_QUEUE_H

#include <string>
#include <stdexcept>
#include "PersonNode.h"
#include "Queue.h"

/**
 * Represents a FIFO data structure (First In First Out). Picture a line
 * to wait for something (first person in is the first person out)
 */
template <class T>
class PersonQueue: public Queue<T>{


public:
    PersonNode* front;
    PersonNode* end;
    int size;


    /**
     * constr
     */
    PersonQueue();

    /**
     * copy constr
     * @param queueToCopy
     */
    PersonQueue(const PersonQueue& queueToCopy);

    /**
     * destr
     */
    ~PersonQueue();
    
    /**
     * adds a person on to the waitlist queue
     * @param name
     * @param phoneNumber
     * @param email
     * @param contactPreference
     */
    void enqueue(std::string name, std::string phoneNumber, std::string email, std::string contactPreference);

    /**
     * removes person from the front of the queue and returns their properties
     * @return
     */
    std::string dequeue();

    /**
     * returs whether the waitlist is empty or not
     * @return
     */
    bool isEmpty();

    int getSize();

};

#include "PersonQueue.inl"

#endif //STACKSANDQUEUES_PERSON_QUEUE_H
