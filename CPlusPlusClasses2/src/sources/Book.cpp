#include <iostream>

using namespace std;

#define Log(x) std::cout << x << std::endl

class Book {
    public:
        std::string title;
        std::string author;
        int pages;
        
        // ! CONSTRUCTOR
        // ? SETTING DEFAULT VALUES
        Book() {
            title = "UNKOWN";
            author = "UNKOWN";
            pages = 0;
        }
        // ! CONSTRUCTOR WITH PARAMETERS
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        void ToString() {
                std::string booktitle = "Book Title: " + title;
                std::string bookAuthor = "\nBook Author: " + author + "\n";

                std::cout 
                << booktitle 
                << bookAuthor 
                << "NUmber of pages: " 
                << pages;
            };
        
};