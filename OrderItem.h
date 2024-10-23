//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_ORDERITEM_H
#define ASSIGNMENT_ORDERITEM_H


#pragma once
#include"Book.h"

class OrderItem
{
private:
    int quantity;
    Book* book;
public:
    OrderItem();
    OrderItem(int pquantity,Book* pbook);
    double calculateSubTotal();
    ~OrderItem();
};

#endif //ASSIGNMENT_ORDERITEM_H
