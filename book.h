//
// Created by Harry Margalotti on 12/2/17.
//

#ifndef LAB8ALLFILES_BOOK_NODE_H
#define LAB8ALLFILES_BOOK_NODE_H
#include <string>
#include "PersonQueue.h"


class book {

public:
    std::string author;
    std::string title;
    int wantVal;
    int hasVal;
    PersonQueue<PersonNode>* waitList;



    /**
     * Set Author - mutator
     * @param authorIn
     */
    void setAuthor(const std::string &authorIn);


    /**
     * Set Title - mutator
     * @param titleIn
     */
    void setTitle(const std::string &titleIn);




    /**
     * Constructor
     * @param author of book
     * @param title of book
     * @param wantVal the number of books desired
     * @param hasVal the number of books in stock
     */
    book( std::string author, std::string title, int wantVal, int hasVal);

    /**
     * copy constructor
     * @param bookToCopy
     */
    book(const book &bookToCopy);

    /**
     * destructor
     */
    ~book();


    /**
     * Set want val - mutator
     * @param wantValIn
     */

    void setWantVal(int wantValIn);

    /**
     * set has val - mutator
     * @param hasValIn
     */
    void setHasVal(int hasValIn);

    /**
     * returns author of book
     * @return
     */
    std::string getAuthor();

    /**
     * @return title book
     */
    std::string getTitle();


    /**
     * returns want val
     * @return
     */
    int getWantVal();

    /**
     * returns the has val
     * @return
     */
    int getHasVal();

    /**
     * returns the first person in the waitlist of the given book
     * @return
     */
    std::string firstPerson();

    /**
     * adds a person to the wailist of a given waitlist
     * @param name
     * @param phoneNumber
     * @param email
     * @param contactPreference
     */

    void addToWaitlist(std::string name, std::string phoneNumber, std::string email, std::string contactPreference);


    /**
     * returns a book in a presentable format
     * @return
     */
    std::string toString();


    /**
     * returns whether the waitlist is empty or not
     * @return bool
     */
    bool isWaitlistEmpty();


    /**
     * format for writing out the wailist
     * @return string
     */
    std::string outWaitlist();
};




#endif //LAB8ALLFILES_BOOK_NODE_H