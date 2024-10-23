//
// Created by Lakindu on 2024-10-23.
//

#include "Cart.h"
#include "Book.h"
#include <iostream>

int CartItem::nextId = 1;



Cart::Cart() {
    cartId = 0;
    totalAmount = 0;
}

Cart::Cart(int cId) {
    cartId = cId;
    totalAmount = 0;

}


void Cart::displayCart(){
    for (int i = 0; i < MAX_ORDERS; i++) {
        if (cartItems[i] -> getPrice() != 0 || cartItems[i]->getQuantity() != 0) {
            std::cout << "Item ID: " << cartItems[i]->getItemId() << " Name: " << cartItems[i]->getName() << " Price: " << cartItems[i]->getPrice() << " Quantity: " << cartItems[i]->getQuantity() << std::endl;
        }
    }
}

void Cart::addItem(Book item, int quantity) {

    for (int i = 0; i < MAX_ORDERS; i++) {
        if (cartItems[i]->getPrice() == 0 && cartItems[i]->getQuantity() == 0) {
            cartItems[i] = new CartItem(1, item.getName(), item.getPrice(), quantity);

            // Update the total amount
            totalAmount += (item.getPrice() * quantity);

            std::cout << "Item added to cart successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Cart is full! Cannot add more items." << std::endl;
}

double Cart::getTotalAmount() {
    return totalAmount;
}

bool Cart::empty() {

    for (int i = 0; i < MAX_ORDERS; i++) {

        if (cartItems[i]->getPrice() != 0 || cartItems[i]->getQuantity() != 0) {
            return false;
        }
    }
    return true;
}

 CartItem* Cart::getItems()  {
    return reinterpret_cast<CartItem *>(cartItems);
}

void Cart::clearCart() {

    for (int i = 0; i < MAX_ORDERS; i++) {
        cartItems[i] = new CartItem(0, "", 0.0, 0);
    }
    totalAmount = 0;
}

Cart::~Cart() {
    //deleting cartItems when deleting cart due to composition relationship
    for (int i = 0; i < MAX_ORDERS; i++) {
        delete cartItems[i];
    }

}