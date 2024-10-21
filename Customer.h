//
// Created by Lakindu on 2024-10-21.
//

#ifndef ASSIGNMENT_CUSTOMER_H
#define ASSIGNMENT_CUSTOMER_H
#include "User.h"

class Customer:public User {
protected:
    std::string shippingAddress;
    int loyaltyPoints;

public:
    Customer(int uID, std::string u, std::string e, std::string p, std::string sa, int lp);
    void viewWishlist();
    void manageCart();
    void placeOrder();
    void writeReview();
};


#endif //ASSIGNMENT_CUSTOMER_H
