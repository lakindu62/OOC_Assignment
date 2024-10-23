//
// Created by Lakindu on 2024-10-21.
//

#ifndef ASSIGNMENT_CUSTOMER_H
#define ASSIGNMENT_CUSTOMER_H


#include "User.h"
#include "Book.h"
#include "Cart.h"

class Customer:public User {
protected:
    std::string shippingAddress;
    int loyaltyPoints;
    Cart cart;




public:
    Customer(int uID, std::string u, std::string e, std::string p, std::string sa, int lp);

    Cart& getCart();
    void addToCart(Book book , int quantity);
    bool placeOrder();
    void writeReview();
};


#endif //ASSIGNMENT_CUSTOMER_H
