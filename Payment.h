//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_PAYMENT_H
#define ASSIGNMENT_PAYMENT_H


#pragma once
#include<iostream>
#include<string>
using namespace std;

class Payment
{
private:
    int paymentID;
    double amount;
    string paymentMethod;

public:
    Payment();
    Payment(int pPaymentID, double pamount, string pPaymentMethod);
    bool processPayment();
    void generateReceipt();
    ~Payment();
};


#endif //ASSIGNMENT_PAYMENT_H
