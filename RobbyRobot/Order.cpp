//
// Created by Mary Huerta on 10/18/16.
//

#include "Order.h"
#include "customer.h"
#include "salesAssoc.h"
#include "RobotModel.h"
#include "shop.h"

//Setters

void Order::setOrderNumber(int orderNumber) {
    Order::orderNumber = orderNumber;
}

void Order::setDate(const String &date) {
    Order::date = date;
}

void Order::setCustomer(Customer *customer) {
    Order::customer = customer;
}

void Order::setSalesAssoc(SalesAssoc *salesAssoc) {
    Order::salesAssoc = salesAssoc;
}

void Order::setRobotModel(RobotModel *robotModel) {
    Order::robotModel = robotModel;
}

void Order::setQuanity(int quanity) {
    Order::quanity = quanity;
}

void Order::setShipping(double shipping) {
    Order::shipping = shipping;
}

void Order::setSubtotal(double subtotal) {
    Order::subtotal = subtotal;
}

void Order::setTax(double tax) {
    Order::tax = tax;
}


int Order::getOrderNumber() const {
    return orderNumber;
}

const String &Order::getDate() const {
    return date;
}



//Getters



int Order::getQuanity() const {
    return quanity;
}

double Order::getShipping() const {
    return shipping;
}

double Order::getSubtotal() const {
    return subtotal;
}

double Order::getTax() const {
    return tax;
}

string Order::to_string(){
    string space = " ";
    string temp =  space + "Customer: " + customer->to_string() + " Sales Associate: " + salesAssoc->to_string()  ;
    return temp;
}
