//
//  main.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include <iostream>
#include "Drinks.hpp"
#include "Alcoholic.hpp"
#include "NoAlcoholic.hpp"
#include "User.hpp"


int main() {
    
    Alcoholic *d1 = new Alcoholic("gin", 5.60, 2, "gin", 20, 2.99);
    Alcoholic *d2 = new Alcoholic("whiskey", 7.80, 4, "whiskey", 40, 4.79);
    Alcoholic *d3 = new Alcoholic("wine", 4.00, 1, "wine", 34.5, 1.99);
    NoAlcoholic *d4 = new NoAlcoholic("tea", 2.8, 1, "ice tea", 0.5, 1.05);
    NoAlcoholic *d5 = new NoAlcoholic("juice", 2.5, 1, "apple", 0.5, 1.65);
    NoAlcoholic *d6 = new NoAlcoholic("water", 3.0, 1, "mineral", 1.5, 1.10);
    Alcoholic *d7 = new Alcoholic("gin", 5.60, 1, "gin", 20, 2.99);
    Alcoholic *d8 = new Alcoholic("whiskey", 7.80, 3, "whiskey", 40, 4.79);
    Alcoholic *d9 = new Alcoholic("wine", 4.00, 5, "wine", 34.5, 1.99);
    NoAlcoholic *d10 = new NoAlcoholic("tea", 2.8, 7, "ice tea", 0.5, 1.05);
    NoAlcoholic *d11 = new NoAlcoholic("juice", 2.5, 5, "apple", 0.5, 1.65);
    NoAlcoholic *d12 = new NoAlcoholic("water", 3.0, 10, "mineral", 1.5, 1.10);
    
    // Вектор от напитки
    
    std::vector<Drinks *> drinks1;
    drinks1.push_back(d1);
    drinks1.push_back(d2);
    drinks1.push_back(d3);
    drinks1.push_back(d4);
    drinks1.push_back(d5);
    drinks1.push_back(d6);
    
    std::vector<Drinks *> drinks2;
    drinks2.push_back(d1);
    drinks2.push_back(d5);
    drinks2.push_back(d6);
    
    std::vector<Drinks *> drinks3;
    drinks3.push_back(d6);
    drinks3.push_back(d7);
    drinks3.push_back(d8);
    drinks3.push_back(d9);
    
    std::vector<Drinks *> drinks4;
    drinks4.push_back(d10);
    drinks4.push_back(d11);
    drinks4.push_back(d12);
    
    Order *o1 = new Order(drinks1, "22.01.24");
    Order *o2 = new Order(drinks2, "23.01.24");
    Order *o3 = new Order(drinks3, "22.01.24");
    Order *o4 = new Order(drinks4, "10.01.24");
    
    //Вектори от поръчки
    
    std::vector<Order *> orders1;
    orders1.push_back(o1);
    orders1.push_back(o2);
    
    std::vector<Order *> orders2;
    orders2.push_back(o3);
    orders2.push_back(o2);
    
    std::vector<Order *> orders3;
    orders3.push_back(o3);
    orders3.push_back(o4);
    
    User customer1("Ralitsa Ilieva", orders1);
    customer1.print();
    User customer2("Iva Ivanova", orders2);
    customer2.print();
    User customer3("Toni Marinov", orders3);
    customer3.print();
    
    return 0;
}
