//
// Created by Mary Huerta on 10/18/16.
//
#ifdef _MSC_VER
#include "stdafx.h"
#endif
#include "customer.h"
#include <string>
#include <iostream>

Customer::Customer( const vector<Order *> &orders,
                    string name,
                    int customerNumber,
                    double wallet) :
                    orders(orders),
                    name(name),
                    customerNumber(customerNumber),
                    wallet(wallet) {}

int Customer::getCustomerNumber() const {
    return customerNumber;
}

double Customer::getWallet() const {
    return wallet;
}
