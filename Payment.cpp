//
// Created by Lakindu on 2024-10-23.
//

#include "Payment.h"

#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;





Payment::Payment(int pPaymentID, double pamount, string pPaymentMethod) {
    paymentID = pPaymentID;
    amount = pamount;
    paymentMethod.assign(pPaymentMethod);
}

bool Payment::processPayment() {
    cout << "Payment processed successfully" << endl;
    return true;
}

void Payment::generateReceipt() {
    cout <<  "Payment ID: " << paymentID << " Amount: " << amount << " Payment Method: " << paymentMethod << endl;
}


Payment::~Payment() {
    cout << "Payment deleted";
}
