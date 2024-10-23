//
// Created by Lakindu on 2024-10-23.
//

#ifndef ASSIGNMENT_ORDER_H
#define ASSIGNMENT_ORDER_H



#include "OrderItem.h"
#include "Payment.h"
#include "Customer.h"



class Order
{
private:
    int orderID;
    double totalAmount;
    string status;
    OrderItem* item[2];
    Payment* pay;
    Customer* cus;
public:
    Order();
    Order(int pOrderID, string pstatus, Customer* pcus, int quan, int payID, string paystatus);
    double calculateTotal();
    void updateStatus();
    void generateInvoice();
    ~Order();
};

#endif //ASSIGNMENT_ORDER_H
