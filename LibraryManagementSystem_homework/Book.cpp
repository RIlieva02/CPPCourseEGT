//
//  Book.cpp
//  LibraryManagementSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include "Book.hpp"

Book::Book(std::string title, std::string autor, std::string ISBN){
    setTitle(title);
    setAutor(autor);
    setISBN(ISBN);
}

void Book::setTitle(std::string title){
    this -> title = title;
}
std::string Book::getTitle() const{
    return this -> title;
}
void Book::setAutor(std::string autor){
    this -> autor = autor;
}
std::string Book::getAutor() const{
    return this -> autor;
}
void Book::setISBN(std::string ISBN){
    this -> ISBN =ISBN;
}
std::string Book::getISBN() const{
    return this -> ISBN;
}

void Book::display(){
    std::cout << "Name: " << getTitle() << std::endl
                << "Autor: " << getAutor() << std::endl
                << "ISBN: " << getISBN() << std::endl;
    std::cout << std::endl;
}
