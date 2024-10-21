//
// Created by Lakindu on 2024-10-21.
//

#include "Customer.h"
#include "iostream"

using namespace std;

Customer::Customer(int uID, std::string u, std::string e, std::string p, std::string sa, int lp) : User(uID, u, e, p) {

    shippingAddress = sa;
    loyaltyPoints = lp;
}
