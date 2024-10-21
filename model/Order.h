#ifndef ORDER_H
#define ORDER_H

#include <iostream>
using namespace std;

class Order {
private:
    string idOrder;
    string idEmployee;
    string idCustomer;
    string orderDateTime;

public:
    Order(const string &idOrder, const string &idEmployee, const string &idCustomer, const string &orderDateTime);
    string getId() const;
    string getEmployeeId() const;
    string getCustomerId() const;
    string getOrderDateTime() const;
    void setOrderDateTime(const string &orderDateTime);
};

#endif // ORDER_H
