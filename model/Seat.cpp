#include "Seat.h"

Seat::Seat(const string &idSeat, const string &idRoom, int column, int row)
    : idSeat(idSeat), idRoom(idRoom), column(column), row(row) {}

string Seat::getId() const {
    return idSeat;
}

string Seat::getRoomId() const {
    return idRoom;
}

int Seat::getColumn() const {
    return column;
}

int Seat::getRow() const {
    return row;
}

void Seat::setColumn(int column) {
    this->column = column;
}

void Seat::setRow(int row) {
    this->row = row;
}
