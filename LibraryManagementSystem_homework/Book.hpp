//
//  Book.hpp
//  LibraryManagementSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Book{
public:
    Book(std::string, std::string, std::string);
    void setTitle(std::string);
    std::string getTitle() const;
    void setAutor(std::string);
    std::string getAutor() const;
    void setISBN(std::string);
    std::string getISBN() const;
    
    void display();
private:
    std::string title;
    std::string autor;
    std::string ISBN;
};
#endif /* Book_hpp */
