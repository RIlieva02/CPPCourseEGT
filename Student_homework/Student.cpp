//
//  Student.cpp
//  Student_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include "Student.hpp"

Student::Student(std::string name, int ID, std::string city, std::string birthday){
    setName(name);
    setPersonID(ID);
    setCity(city);
    setBirthday(birthday);
}

void Student::setName(std::string name){
    this -> name = name;
}
std::string Student::getName() const{
    return this -> name;
}
void Student::setPersonID(int ID){
    this -> personID = ID;
}
int Student::getPersonID() const{
    return this -> personID;
}
void Student::setCity(std::string city){
    this -> city = city;
}
std::string Student::getCity() const{
    return this -> city;
}
void Student::setBirthday(std::string birthday){
    this -> birthday = birthday;
}
std::string Student::getBirthday() const{
    return this -> birthday;
}

void Student::print(){
    std::cout << "Name: " << getName() << std::endl
                << "ID: " << getPersonID() << std::endl
                << "City: " << getCity() << std::endl
                << "Birthday: " << getBirthday() << std::endl;
}

