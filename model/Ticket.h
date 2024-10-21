#ifndef TICKET_H
#define TICKET_H

#include <iostream>
using namespace std;

class Ticket {
private:
    string idTicket;
    string idShowtime;
    string idSeat;
    bool isAvailable;

public:
    Ticket(const string &idTicket, const string &idShowtime, const string &idSeat, bool isAvailable);
    string getId() const;
    string getShowtimeId() const;
    string getSeatId() const;
    bool getIsAvailable() const;
    void setIsAvailable(bool isAvailable);
};

#endif // TICKET_H
