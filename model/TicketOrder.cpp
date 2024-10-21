#include "TicketOrder.h"

TicketOrder::TicketOrder(const string &idTicketOrder, const string &idTicket, const string &idOrder)
    : idTicketOrder(idTicketOrder), idTicket(idTicket), idOrder(idOrder) {}

string TicketOrder::getId() const {
    return idTicketOrder;
}

string TicketOrder::getTicketId() const {
    return idTicket;
}

string TicketOrder::getOrderId() const {
    return idOrder;
}
