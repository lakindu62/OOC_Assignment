//
// Created by Lakindu on 2024-10-21.
//

#include "Customer.h"
#include "iostream"
#include "Book.h"

using namespace std;

Customer::Customer(int uID, std::string u, std::string e, std::string p, std::string sa, int lp) : User(uID, u, e, p) {
    shippingAddress = sa;
    loyaltyPoints = lp;
}


Cart& Customer::getCart() {
    return cart;
}

//dependency relationship between Customer and Book
void Customer::addToCart(Book bookI , int quantity = 1) {
    cart.addItem(bookI , quantity);
}

bool Customer::placeOrder() {
    if(cart.empty()) {
        cout << "Cart is empty" << endl;
        return false;
    }

    // Process the order using cart's contents
    double orderTotal = cart.getTotalAmount();

    std::cout << "Order Total: " << orderTotal << std::endl;

    // Clear the cart after successful order
    cart.clearCart();
    return true;
}

void Customer::writeReview() {
    cout << "Review written" << endl;
}
