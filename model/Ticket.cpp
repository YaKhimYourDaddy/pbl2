#include "Ticket.h"

Ticket::Ticket(const string &idTicket, const string &idShowtime, const string &idSeat, bool isAvailable)
    : idTicket(idTicket), idShowtime(idShowtime), idSeat(idSeat), isAvailable(isAvailable) {}

string Ticket::getId() const {
    return idTicket;
}

string Ticket::getShowtimeId() const {
    return idShowtime;
}

string Ticket::getSeatId() const {
    return idSeat;
}

bool Ticket::getIsAvailable() const {
    return isAvailable;
}

void Ticket::setIsAvailable(bool isAvailable) {
    this->isAvailable = isAvailable;
}
