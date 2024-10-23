//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_CART_H
#define ASSIGNMENT_CART_H
#include "Book.h"
#include "CartItem.h"
#define MAX_ORDERS 10

class Cart {
private:
    static int nextId;
    int cartId;
    double totalAmount;
    CartItem* cartItems[10]; // Composition due to cartItems being deleted when cart is deleted.

public:
    Cart();
    Cart(int cId);

    void addItem(Book item , int quantity);
    void removeItem(int itemId);
    void displayCart();

    CartItem* getItems();
    bool empty();
    double getTotalAmount();
    void clearCart();


    ~Cart();
};


#endif //ASSIGNMENT_CART_H
