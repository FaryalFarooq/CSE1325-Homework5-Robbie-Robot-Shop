//
// Created by Mary Huerta on 10/18/16.
//

#include "Order.h"
#include "customer.h"
#include "salesAssoc.h"
#include "RobotModel.h"
#include "shop.h"


//Order::Order(int orderNumber, const String &date,  Customer customer, SalesAssoc salesAssoc,
 //            const RobotModel &robotModel, int quanity, double shipping, double subtotal, double tax) : orderNumber(
 //       orderNumber), date(date), customer(&customer), salesAssoc(&salesAssoc), robotModel(robotModel), quanity(quanity),
  //                                                                                                      shipping(
  //                                                                                                              shipping),
  //                                                                                                      subtotal(
  //                                                                                                              subtotal),
  //                                                                                                      tax(tax) {}


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

void Order::setRobotModel(const RobotModel &robotModel) {
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





const RobotModel &Order::getRobotModel() const {
    return robotModel;
}

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

/*double Order::totalPrice(){

}*/
