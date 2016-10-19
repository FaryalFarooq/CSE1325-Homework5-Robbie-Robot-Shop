//
// Created by Mary Huerta on 10/18/16.
//

#ifndef ROBBYROBOT_ORDER_H
#define ROBBYROBOT_ORDER_H
#include <string.h>
#include "std_lib_facilities.h"
//#include "customer.h"
//#include "salesAssoc.h"
#include "RobotModel.h"
#include "shop.h"

class SalesAssoc;
class Customer;


class Order {
public:

    //Order(int orderNumber, const String &date, Customer customer,  SalesAssoc salesAssoc,
      //    const RobotModel &robotModel, int quanity, double shipping, double subtotal, double tax);

    int getOrderNumber() const;
    const String &getDate() const;
    const RobotModel &getRobotModel() const;
    int getQuanity() const;
    double getShipping() const;
    double getSubtotal() const;
    double getTax() const;
    double totalPrice();

    void setOrderNumber(int orderNumber);

    void setDate(const String &date);

    void setCustomer(Customer *customer);

    void setSalesAssoc(SalesAssoc *salesAssoc);

    void setRobotModel(const RobotModel &robotModel);

    void setQuanity(int quanity);

    void setShipping(double shipping);

    void setSubtotal(double subtotal);

    void setTax(double tax);


protected:
    int orderNumber;
    string date;
    Customer* customer;
    SalesAssoc* salesAssoc;
    RobotModel robotModel;
    int quanity;
    double shipping;
    double subtotal;
    double tax;



};


#endif //ROBBYROBOT_ORDER_H
