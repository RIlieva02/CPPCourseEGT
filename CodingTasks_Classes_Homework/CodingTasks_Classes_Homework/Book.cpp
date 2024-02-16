//
//  Book.cpp
//  CodingTasks_Classes_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Book.hpp"

Book::Book(std::string title, std::string author, int pages){
    setTitle(title);
    setAuthor(author);
    setPages(pages);
}

void Book::setTitle(std::string title){
    this ->title = title;
}
std::string Book::getTitle() const{
    return this->title;
}
void Book::setAuthor(std::string author){
    this->author = author;
}
std::string Book::getAuthor() const{
    return this->author;
}
void Book::setPages(int pages){
    this->pages = pages;
}
int Book::getPages() const{
    return this->pages;
}

void Book::displey(){
    std::cout << "Title: " << getTitle() << std::endl
                << "Author: " << getAuthor() << std::endl
                << "Pages: " << getPages() << std::endl;
}
