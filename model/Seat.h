#ifndef SEAT_H
#define SEAT_H

#include <iostream>
using namespace std;

class Seat {
private:
    string idSeat;
    string idRoom;
    int column;
    int row;

public:
    Seat(const string &idSeat, const string &idRoom, int column, int row);
    string getId() const;
    string getRoomId() const;
    int getColumn() const;
    int getRow() const;
    void setColumn(int column);
    void setRow(int row);
};

#endif // SEAT_H
