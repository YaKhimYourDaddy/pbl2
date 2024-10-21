#ifndef TICKETORDER_H
#define TICKETORDER_H

#include <iostream>
using namespace std;

class TicketOrder {
private:
    string idTicketOrder;
    string idTicket;
    string idOrder;

public:
    TicketOrder(const string &idTicketOrder, const string &idTicket, const string &idOrder);
    string getId() const;
    string getTicketId() const;
    string getOrderId() const;
};

#endif // TICKETORDER_H
