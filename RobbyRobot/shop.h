//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_SHOP_H
#define ROBBYROBOT_SHOP_H


#include "RobotModel.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shop {
public:
    void createRobotModel(RobotModel* rob);
    //void newCustomer(Customer cust);

    void placeOrder();

    int numberOfRobotModels();
    int numberOfCustomers();

    void easter_egg();

private:
    vector<RobotModel*> robotModels;
    //vector<Customer> customers;
    vector<RobotPart*> robotParts;
};


#endif //ROBBYROBOT_SHOP_H
