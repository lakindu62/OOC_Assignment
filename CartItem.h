//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_CARTITEM_H
#define ASSIGNMENT_CARTITEM_H

#include <string>

class CartItem {
private:
    static int nextId;
    int itemId;
    std::string name;
    double price;
    int quantity{};

public:
    CartItem();
    CartItem(int id, std::string n, double p , int q);

    int getItemId() const;
    std::string getName();
    double getPrice() const;
    int getQuantity();

};


#endif //ASSIGNMENT_CARTITEM_H
