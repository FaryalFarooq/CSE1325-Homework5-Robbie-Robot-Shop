//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_SHOP_H
#define ROBBYROBOT_SHOP_H


#include "RobotModel.h"

#include <iostream>
#include <string>
#include <vector>

class Shop {
public:
    void createRobotModel(RobotModel* rob);
    //void newCustomer(Customer cust);
    void createRobotPart(RobotPart* robPart);

    void placeOrder();

    int numberOfRobotModels();
    int numberOfCustomers();

    void easterEggModels();
    void printParts();
public:
    vector<RobotPart*> robotParts;
    vector<RobotModel*> robotModels;
private:
    //vector<RobotModel*> robotModels;
    //vector<Customer> customers;
    //vector<RobotPart*> robotParts;
};


#endif //ROBBYROBOT_SHOP_H
