//
// Created by Mary Huerta on 10/18/16.
//

#ifndef ROBBYROBOT_SALESASSOC_H
#define ROBBYROBOT_SALESASSOC_H

#include <string>
#include <iostream>
#include "Order.h"
#include "shop.h"
#include <vector>

using namespace std;

class Order;

class SalesAssoc {
public:

    SalesAssoc(const vector<Order *> &orders, const String &name, int employeeNumber);

    string to_string();

private:
    vector<Order*> orders;
    string name;
    int employeeNumber;

    //vector<RobotPart*> robotParts;
};


#endif //ROBBYROBOT_SALESASSOC_H
