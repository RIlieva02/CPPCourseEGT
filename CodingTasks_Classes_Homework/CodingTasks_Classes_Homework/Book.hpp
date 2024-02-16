//
//  Book.hpp
//  CodingTasks_Classes_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
#include <iostream>


class Book{
public:
    Book(std::string, std::string, int);
    void setTitle(std::string);
    std::string getTitle() const;
    void setAuthor(std::string);
    std::string getAuthor() const;
    void setPages(int);
    int getPages() const;
    void displey();
    
private:
    std::string title;
    std::string author;
    int pages;
};
#endif /* Book_hpp */
