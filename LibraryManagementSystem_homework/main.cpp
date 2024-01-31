//
//  main.cpp
//  LibraryManagementSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include <iostream>
#include <vector>
#include "Book.hpp"
#include "Member.hpp"

int main() {
    
    Book b1("Anna Karenina", "Leo Tolstoy", "<ISBN>");
    Book b2("The Catcher in the Rye", "J.D. Salinger", "<ISBN>");
    
    std::vector<Book> books;
    books.push_back(b1);
    books.push_back(b2);
    
    for (int i = 0; i < books.size(); i++){
        books.at(i).display();
    }
    
    Member m1("Ralitsa Ilieva", 21, "<ID>");
    Member m2("Ivan Ivanov", 34, "<ID>");
    
    std::vector<Member> members;
    members.push_back(m1);
    members.push_back(m2);
    
    for (int i = 0; i < members.size(); i++){
        members.at(i).display();
    }
    members.at(0).borrowBook(&b1);
    members.at(1).borrowBook(&b2);
    
    return 0;
}
