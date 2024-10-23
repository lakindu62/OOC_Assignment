//
// Created by Lakindu on 2024-10-23.
//

#include "CartItem.h"


CartItem::CartItem(int id, std::string n, double p , int q) {
    itemId = nextId++;
    itemId = id;
    name = n;
    price = p;
    quantity = q;

}

int CartItem::getItemId() const {
    return itemId;
}

std::string CartItem::getName() {
    return name;
}

double CartItem::getPrice() const {
    return price;
}


int CartItem::getQuantity() {
    return quantity;
}

CartItem::CartItem() {
    itemId = 0;
    name = "";
    price = 0;
    quantity = 0;
}
