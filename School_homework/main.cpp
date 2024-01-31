//
//  main.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include <iostream>
#include "Discipline.hpp"
#include "Teacher.hpp"
#include "Class.hpp"
#include "School.hpp"

int main() {
   
    Discipline displ1("History", 45, 69);
    Discipline displ2("Math", 50, 60);
    Discipline displ3("Art", 15, 15);
    Discipline displ4("Biology", 20, 15);
    
    
    Teacher t1("Ivan Ivanov", "Mr", displ1);
    Teacher t2("Iva Ivanovа", "Mrs", displ3);
    Teacher t3("Teodor Todorov", "Mr", displ3);
    Teacher t4("Naq Kostova", "Mrs", displ4);
    
    // Ученици
    Student s1("Ralitsa Ilieva", 10000);
    Student s2("Toni Marinov", 11000);
    Student s3("Tanq Mileva", 11100);
    Student s4("Ivan Petkov", 11110);
    Student s5("Ani Ivanova", 11111);
    
    // Вектор от ученици
    std::vector<Student> students;
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
    
    // Класове
    Class c1("12a", students, t1);
    Class c2("12b", students, t2);
    Class c3("10a", students, t3);
    Class c4("7a", students, t4);
    
    // Вектор от класове
    std::vector<Class> classes;
    classes.push_back(c1);
    classes.push_back(c2);
    classes.push_back(c3);
    classes.push_back(c4);
    
    School school("Cascade Heights School", classes);
    school.print();
    
    
    return 0;
}
