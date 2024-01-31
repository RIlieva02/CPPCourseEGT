//
//  Rectangle.cpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4)
                    : p1(p1), p2(p2), p3(p3), p4(p4) {}

void Rectangle::setP1(const Point &p1){
    Rectangle:: p1 = p1;
}
const Point& Rectangle::getP1() const{
    return p1;
}
void Rectangle::setP2(const Point &p2){
    Rectangle:: p2 = p2;
}
const Point& Rectangle::getP2() const{
    return p2;
}
void Rectangle::setP3(const Point &p3){
    Rectangle:: p3 = p3;
}
const Point& Rectangle::getP3() const{
    return p3;
}
void Rectangle::setP4(const Point &p4){
    Rectangle:: p4 = p4;
}
const Point& Rectangle::getP4() const{
    return p4;
}

bool Rectangle::isRectangle() const {
    if ((this -> p1.getX() == this -> p3.getX()) && (this ->p2.getX()) == this -> p4.getX()){
        return true;
    }
    else {
        return false;
    }
}
bool Rectangle::isSquare() const{
    if (isRectangle() == true){
//        int sideA = calculateLenght(p1.getX(), p2.getX());
//        int sideB = calculateLenght(p1.getX(), p3.getX());
        if (calculateLenght(p1.getX(), p2.getX()) == calculateLenght(p1.getY(), p3.getY())){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int Rectangle::calculateLenght(int first, int second) const{
    return first - second; // second is less
}

int Rectangle::getPerimeter() const{
    int perimeter = 0;
    perimeter = (p2.getX() - p1.getX()) + (p4.getY() - p2.getY()) + (p4.getX() - p3.getX()) + (p3.getY() - p1.getY()); // a + b + c + d
    
    return perimeter;
}
int Rectangle::getArea() const{
    int area = 0;
    if (isRectangle() == true){
        area = (p2.getX() - p1.getX()) * (p4.getY() - p2.getY()); // a * b
    }
    else if (isSquare() == true){
        area = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX()); // a * a
    }
    else {
        area = 1/2 * ((p2.getX() - p1.getX()) + (p4.getY() - p2.getY())) * sqrt(pow((p2.getX() - p1.getX()), 2) + pow((p4.getY() - p2.getY()), 2)); // 1/2 * (a + b) * sqrt(pow(a,2) + pow(b, 2))
    }
    
    return area;
}

bool Rectangle::operator==(Rectangle &other){
    if (getArea() != other.getArea()){
        return false;
    }
    else {
        return true;
    }
}
bool Rectangle::operator>(Rectangle &other){
    return getArea() > other.getArea();
}
bool Rectangle::operator<(Rectangle &other){
    return getArea() < other.getArea();
}


