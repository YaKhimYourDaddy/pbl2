#ifndef ROOM_H
#define ROOM_H

#include <iostream>
using namespace std;

class Room {
private:
    string idRoom;
    string idBranch;
    string name;
    int maxRow;
    int maxColumn;

public:
    Room(const string &idRoom, const string &idBranch, const string &name, int maxRow, int maxColumn);
    string getId() const;
    string getBranchId() const;
    string getName() const;
    int getMaxRow() const;
    int getMaxColumn() const;
    void setName(const string &name);
    void setMaxRow(int maxRow);
    void setMaxColumn(int maxColumn);
};

#endif // ROOM_H
