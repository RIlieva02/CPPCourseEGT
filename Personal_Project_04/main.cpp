//
//  main.cpp
//  Shopping_cart
//
//  Created by Ralitsa Toneva on 28.03.23.
//

#include <iostream>
#include "shopping_cart.hpp"

enum class ShoppingcartStatus{ // Клас за проследяване на статусът на количката
    Finished,
    InProgress,
    NotStarted
};

int main() {
    
    double shoppingCartPrice = 0.00; //Помощна променлива, за пресмятане на
                                    // крайната сметка
    // Статус на количкатар
    ShoppingcartStatus status;
    status = ShoppingcartStatus::NotStarted;
    
    ShoppingCart food("Food / Drinks"); // Продукти от тип храна и напитки
    
    food.setName("Pineapple"); // Първи продукт
    food.setPrice(4.40); // Цена на брой
    food.setQuantity(1); // Количество
    food.setYes_No(true); // Купува или не
    // Проверка дали купувачът иска даденият продукт
    if(food.getYes_No() == true){
        food.setFinalPrice(food.getPrice(), food.getQuantity(), 0.00);
        shoppingCartPrice += food.getFinalPrice();
        food.print();
    }
    status = ShoppingcartStatus::InProgress;
    
    food.setName("Apple"); // Втори продукт
    food.setPrice(0.90); // Цена на брой
    food.setQuantity(4); // Количество
    food.setYes_No(true); // Купува или не
    // Проверка дали купувачът иска даденият продукт
    if(food.getYes_No() == true){
        food.setFinalPrice(food.getPrice(), food.getQuantity(), 0.00);
        shoppingCartPrice += food.getFinalPrice(); // Пресмятане на крайната цена
        food.print(); // Принтиране тип касова бележка
    }
    status = ShoppingcartStatus::InProgress;
    
    food.setName("Banana"); // Трети продукт
    food.setPrice(1.05); // Цена на брой
    food.setQuantity(3); // Количество
    food.setYes_No(true); // Купува или не
    // Проверка дали купувачът иска даденият продукт
    if(food.getYes_No() == true){
        food.setFinalPrice(food.getPrice(), food.getQuantity(), 0.00);
        shoppingCartPrice += food.getFinalPrice(); // Пресмятане на крайната цена
        food.print(); // Принтиране тип касова бележка
    }
    status = ShoppingcartStatus::InProgress;
    
    ShoppingCart other("Other"); // Продукти от тип други
    
    other.setName("Toilet paper"); // Първи продукт
    other.setPrice(3.20); // Цена на брой
    other.setQuantity(2); // Количествво
    other.setYes_No(true); // Купува или не
    // Проверка дали купувачът иска даденият продукт
    if(other.getYes_No() == true){
        other.setFinalPrice(other.getPrice(), other.getQuantity(), 0.00);
        shoppingCartPrice += other.getFinalPrice(); // Пресмятане на крайната цена
        other.print(); // Принтиране тип касова бележка
    }
    status = ShoppingcartStatus::Finished;
    
    if(status == ShoppingcartStatus::Finished){
        std::cout << "Final price of the Shopping cart: " << shoppingCartPrice << " $"
        << std:: endl;
    }
    
    std::cout << std::endl;
    return 0;
}
