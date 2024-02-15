//
//  shopping_cart.hpp
//  Shopping_cart
//
//  Created by Ralitsa Toneva on 28.03.23.
//

#ifndef shopping_cart_hpp
#define shopping_cart_hpp

#include <stdio.h>

class ShoppingCart{
private:
    char* name;
    double price;
    unsigned quantity;
    char* products;
    double finalPrice;
    bool yes_no;
    
    void copy(const ShoppingCart& other);
    void swap(ShoppingCart& other);

public:
    
    ShoppingCart(const char* _name = "product name",
                 double _price = 0.00,
                 unsigned _quantity = 0,
                 double finalPrice = 0.00);
    ShoppingCart(const ShoppingCart& other);
    ShoppingCart operator=(const ShoppingCart& other);
    ShoppingCart operator+(const ShoppingCart& other);
    ShoppingCart operator*(const ShoppingCart& other);
    ~ShoppingCart();

    const char* getName() const;
    double getPrice() const;
    unsigned getQuantity() const;
    double getFinalPrice()const;
    bool getYes_No()const;
    
    void setName(const char* _name);
    void setPrice(double _price);
    void setQuantity(unsigned _quantity);
    void setFinalPrice(double _price, unsigned quantity, double finalprice);
    void setYes_No(bool _yes_no);

    void finalShoppingPrice(double _finalPrice);
    
    void print() const;
    void printFinalPrice() const;
    
};

#endif /* shopping_cart_hpp */
