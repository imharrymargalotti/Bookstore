#include <iostream>
#include "inventory.h"
#include "tester.h"



void run(){
    inventory* newInventory = new inventory();
    newInventory->readIn();
    std::string command= " ";
    std::cout<< "Welcome to Boolean Bookstore!"<< std::endl;
    std::cout<< "Please select an action by entering its corresponding command." <<std::endl;
    std::cout<< "If you would like a list of the commands, please select 'H'. "<<std::endl;

    while( command != "Q" && command != "q") {

        //std::cin >> command;
        std::getline(std::cin, command);
        if (command.length() != 1) {
            std::cout << "You have enetered more than one command. Please enter only 1 command at a time. " << std::endl;
            std::cout
                    << " Please select an action by entering its corresponding command. If you would like a list of the commands, please select 'H'. "
                    << std::endl;

        }else {
            std::cout << "The command you have selected is: " << command <<std::endl;
        }
        if  (command == "h" || command == "H"){
            std::cout << "You have selected the 'Help' command. " <<std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "Here are the possible commands:" << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'I'. This is the Inquire command" << std::endl;
            std::cout<<  "This will Display all information for a specified title." << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'L'. This is the List command" << std::endl;
            std::cout<<  "This will List the information for the entire inventory (in alphabetical order by title)" << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'A'. This is the Add command" << std::endl;
            std::cout<<  "This will add a book to the inventory. " << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'M'. This is the Modify command" << std::endl;
            std::cout<<  "This will modify the want value for the specified title." << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'S'. This is the Sell command." << std::endl;
            std::cout<<  "This will sell 1 book. " << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'O'. This is the Order command. " << std::endl;
            std::cout<<  "This will create a bulk purchase order" << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'D'. This is the Delivery command. " << std::endl;
            std::cout<<  "This will " << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'R'. This is the Return command." << std::endl;
            std::cout<<  "This will return an invoice to the specified file." << std::endl;
            std::cout<<  "" << std::endl;
            std::cout<<  "'Q'. This is the Quit command." << std::endl;
            std::cout<<  "This command will save the inventory and quit the program." << std::endl;
            std::cout<< " "<< std::endl;
            std::cout<<  "'T'. This is the System Test command." << std::endl;
            std::cout<<  "This command will run a basic system test." << std::endl;
            std::cout<< " "<< std::endl;
            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "I" || command == "i"){

            std::cout<< "Please enter a book title"<<std::endl;



            std::string title = "";
            std::cout<<"Book title: ";
            getline(std::cin,title);
            bool again;
            for (int i = 0; i < title.length(); ++i) {
                if(isdigit(title[i])){
                    again = true;
                }
            }


            while(again){
                std::cin.clear();
                std::cout<<"Your input was invalid."<<std::endl;
                std::cout<< "Please enter a book title"<<std::endl;
                getline(std::cin,title);
                for (int i = 0; i < title.length(); ++i) {
                    if(isdigit(title[i])){
                        again = true;
                    }else{
                        again = false;
                    }
                }
            }
            newInventory->inquire(title);

            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "L" || command == "l"){
            newInventory->listInventory();

            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "A" || command == "a"){

            std::cout<< "Please enter a book title"<<std::endl;

            std::string title = "";
            std::cout<<"Book title: ";
            getline(std::cin,title);
            bool again;
            for (int i = 0; i < title.length(); ++i) {
                if(isdigit(title[i])){
                    again = true;
                }
            }


            while(again){
                std::cin.clear();
                std::cout<<"Your input was invalid."<<std::endl;
                std::cout<< "Please enter a book title"<<std::endl;
                getline(std::cin,title);
                for (int i = 0; i < title.length(); ++i) {
                    if(isdigit(title[i])){
                        again = true;
                    }else{
                        again = false;
                    }
                }
            }





            newInventory->addBook(title);


            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "M" || command == "m"){
            std::cout<< "Please enter a book title"<<std::endl;

            std::string title = "";
            std::cout<<"Book title: ";
            getline(std::cin,title);
            bool again;
            for (int i = 0; i < title.length(); ++i) {
                if(isdigit(title[i])){
                    again = true;
                }
            }


            while(again){
                std::cin.clear();
                std::cout<<"Your input was invalid."<<std::endl;
                std::cout<< "Please enter a book title"<<std::endl;
                getline(std::cin,title);
                for (int i = 0; i < title.length(); ++i) {
                    if(isdigit(title[i])){
                        again = true;
                    }else{
                        again = false;
                    }
                }
            }


            newInventory->modify(title);

            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "S" || command == "s"){

            std::cout<< "Please enter a book title"<<std::endl;
            std::string title = "";
            std::cout<<"Book title: ";
            getline(std::cin,title);
            bool again;
            for (int i = 0; i < title.length(); ++i) {
                if(isdigit(title[i])){
                    again = true;
                }
            }


            while(again){
                std::cin.clear();
                std::cout<<"Your input was invalid."<<std::endl;
                std::cout<< "Please enter a book title"<<std::endl;
                getline(std::cin,title);
                for (int i = 0; i < title.length(); ++i) {
                    if(isdigit(title[i])){
                        again = true;
                    }else{
                        again = false;
                    }
                }
            }

            newInventory->sellBook(title);

            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "O" || command == "o"){
            newInventory->order("orderMore");

            std::cout<<  "An order has been placed. A receipt for your order is in the file 'orderMore.txt'" << std::endl;
            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "D" || command == "d"){
            newInventory->delivery("orderMore");


            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "Q" || command == "q"){

            newInventory->quit();


            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else if (command == "R" || command == "r"){
            newInventory->returnInvoice("returnInvoice");


            std::cout<<  "All unwanted books have been returned. A return invoice can be found in returnInvoice.txt" << std::endl;
            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }else if (command == "T" || command == "t"){
            std::cout<<"performing a system test..."<<std::endl;
            testall();
            std::cout<< "If you would like to enter a new command, please do so now:"<< std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;

        }
        else  {
            std::cout<< "This is not a valid command. Please enter a valid command. If you would like a list of the commands, select 'H'" <<std::endl;
            std::cout<< "If you would like to quit the program, enter 'Q'"<<std::endl;
        }

    }
}



int main(){

    run();
    return 0;
}




