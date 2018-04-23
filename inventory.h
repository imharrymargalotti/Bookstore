//
// Created by Eli Wennberg Smith on 12/14/17.
//

#ifndef BOOKSTORE_INVENTORY_H
#define BOOKSTORE_INVENTORY_H

#include "bookList.h"
#include "book.h"

class inventory{
public:
    bookList* bookArr;


    /**
     * constructor
     */
    inventory();

    /**
     * reads in from the inventory file and recreates the book list
     */
    void readIn();

    /**
     * returns a to string of the book
     * @param title
     */
    void inquire(std::string title);

    /**
     * lists out the entire inventory
     */
    void listInventory();

    /**
     * adds a book to the inventory
     * @param title
     */
    void addBook(std::string title);

    /**
     * modifies the want and has vals
     * @param title
     */
    void modify(std::string title);

    /**
     * subtracts one from the hasval of the book
     * @param title
     */
    void sellBook(std::string title);

    /**
     * adds a book to the list
     * @param bookIndex
     */
    void addToList(int bookIndex);

    /**
     * checks all books to see if the want val is greater than the has val.
     * if so, it orders new the difference and creates a receipt in a given file
     * @param filename
     */
    void order(std::string filename);

    /**
     * saves the information from the list into the inventory file
     * @param fileName
     */
    void quit();

    /**
     * takes information from the order receipt and collects an the order upon delivery. updates the want/has vals and
     * notifies operator of the program to notify any customers in the wailist of earch new book
     * @param filename
     */
    void delivery(std::string filename);

    /**
     * if the has val is greater than the want val it returns the extras and writes an invoice
     * @param filename
     */
    void returnInvoice(std::string filename);
};

#endif //BOOKSTORE_INVENTORY_H
