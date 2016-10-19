//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_SHOP_H
#define ROBBYROBOT_SHOP_H


#include "RobotModel.h"
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"
//Forward declarations
class Order;
class SalesAssoc;
class Customer;



class Shop {
public:
    void createRobotModel(RobotModel* rob);
    //void newCustomer(Customer cust);
    void createRobotPart(RobotPart* robPart);

    void createOrder(Order* ord);
    void createCustomer(Customer* cust);
    void createSalesAssoc(SalesAssoc* saleA);
    void placeOrder();

    int numberOfRobotModels();
    int numberOfCustomers();

    void easterEggModels();
    void printParts();
public:
    vector<RobotPart*> robotParts;
    vector<RobotModel*> robotModels;
    vector<Order*> orders;
    vector<SalesAssoc*> salesAssoc;
    vector<Customer*> customer;
private:
    //vector<RobotModel*> robotModels;
    //vector<Customer> customers;
    //vector<RobotPart*> robotParts;
};


#endif //ROBBYROBOT_SHOP_H
