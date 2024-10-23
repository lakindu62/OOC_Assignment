//
// Created by Lakindu on 2024-10-23.
//

#include "Order.h"

#include "Order.h"
#include <iostream>
#include"OrderItem.h"
#include<string.h>
#include"Customer.h"
#include"Payment.h";

Order::Order() {
    for (int i = 0; i < 2; i++) {
        item[i] = new OrderItem(1,0);
    }
    pay = new Payment(1,0,"no status yet");
    orderID = 0;
    totalAmount = 0;
    cus = nullptr;
    status = "no status yet";
}
Order::Order(int pOrderID, string pstatus, Customer* pcus, int quan, int payID, string paystatus) {
    orderID = pOrderID;
    status.assign(pstatus);
    cus = pcus;
    for (int i = 0; i < 2; i++) {
        item[i] = new OrderItem(quan,0);
    }
    totalAmount = calculateTotal();
    pay = new Payment(payID,totalAmount, paystatus);
}
double Order::calculateTotal() {
    totalAmount = 0;
    for (int i = 0; i < 2; i++) {
        totalAmount = totalAmount + item[i]->calculateSubTotal();
    }
    return totalAmount;
}
Order::~Order() {
    for (int i = 0; i < 2; i++) {
        delete item[i];
    }
    delete pay;
}