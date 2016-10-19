//
// Created by Mary Huerta on 10/18/16.
//

#include "salesAssoc.h"
#include <string>
#include <iostream>
#include <vector>
#include "Order.h"

SalesAssoc::SalesAssoc(const vector<Order *> &orders,
                       const String &name,
                       int employeeNumber)
                        : orders(orders),
                          name(name),
                          employeeNumber(employeeNumber) {}

string SalesAssoc::to_string() {
    string temp = name;
    return temp;

}
