//
// Created by Mary Huerta on 10/18/16.
//

#ifndef ROBBYROBOT_CUSTOMER_H
#define ROBBYROBOT_CUSTOMER_H
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"

using namespace std;
class Order;

class Customer {
public:

    Customer( const vector<Order *> &orders,  string name, int customerNumber, double wallet);




    int getCustomerNumber() const;
    String to_string();
    double getWallet() const;

private:
    string name;
    int customerNumber;
    double wallet;
    vector <Order*> orders;

};

#endif //ROBBYROBOT_CUSTOMER_H
