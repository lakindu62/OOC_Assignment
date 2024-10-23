//
// Created by Lakindu on 2024-10-23.
//

#include "OrderItem.h"

#include "OrderItem.h"
#include "Book.h"
#include <iostream>
using namespace std;


OrderItem::OrderItem(){
    quantity = 0;
    book = nullptr;
}

OrderItem::OrderItem(int pquantity, Book* pbook) {
    quantity = pquantity;
    book = pbook;
}

double OrderItem::calculateSubTotal() {
    return  quantity * book->getPrice();
}


OrderItem::~OrderItem() {
    cout << "Order item deleted";
}