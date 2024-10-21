#include "Order.h"

Order::Order(const string &idOrder, const string &idEmployee, const string &idCustomer, const string &orderDateTime)
    : idOrder(idOrder), idEmployee(idEmployee), idCustomer(idCustomer), orderDateTime(orderDateTime) {}

string Order::getId() const {
    return idOrder;
}

string Order::getEmployeeId() const {
    return idEmployee;
}

string Order::getCustomerId() const {
    return idCustomer;
}

string Order::getOrderDateTime() const {
    return orderDateTime;
}

void Order::setOrderDateTime(const string &orderDateTime) {
    this->orderDateTime = orderDateTime;
}
