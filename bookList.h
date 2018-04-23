//
// Created by Eli Wennberg Smith on 12/14/17.
//

#ifndef BOOKSTORE_BOOKLIST_H
#define BOOKSTORE_BOOKLIST_H

#include "book.h"

class bookList{
private:
    book** array;
    int currentItemCount;
    int currentCapacity;





    /**
     * double cap of the arraylist
     */
    void doubleCapacity();



public:

    /**
     * insert at a given index
     * @param bookToAdd
     * @param index
     */
    void insertAt(book* bookToAdd, int index);

    /**
     * constr
     * @param initialCap
     */
    bookList(int initialCap);

    /**
     * destructor
     */
    ~bookList();

    /**
     * gets a book from the list
     * @param index the location from which to get the value
     * @returns a copy of the item at index
     * @throws out_of_range exception if index is invalid
     */
    book* getValueAt(int index);

    /**
     * removes the book at index from the list, and returns a tostring of that book
     * @param index the location from which to get the book
     * @returns a copy of the item at index
     */
    std::string removeValueAt(int index);

    /**
     * checks if there are any books in the list
     * @returns true if there are no valid items in the list, false otherwise
     */
    bool isEmpty();

    /**
     * returns a count of books currently in the list
     * @returns the number of valid items in the list
     */
    int itemCount();


    /**
     * gives a string representation of the current booklist
     * @returns a string representing the full list of books in alphabetacal order
     */
    std::string toString();

    /**
     * Searches the array for a certain book title
     * @post numLinesRun is updated to include lines run by this function
     * @return the index of the first occurrence of numToFind if it is present, otherwise returns -1
     */
    int find(std::string titleToFind);

    /**
     * inserts a book in alphabetical order
     * @param newBook
     */
    void insertInOrder(book* newBook);


};




#endif //BOOKSTORE_BOOKLIST_H
