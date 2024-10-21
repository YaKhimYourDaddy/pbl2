#include "Room.h"

Room::Room(const string &idRoom, const string &idBranch, const string &name, int maxRow, int maxColumn)
    : idRoom(idRoom), idBranch(idBranch), name(name), maxRow(maxRow), maxColumn(maxColumn) {}

string Room::getId() const {
    return idRoom;
}

string Room::getBranchId() const {
    return idBranch;
}

string Room::getName() const {
    return name;
}

int Room::getMaxRow() const {
    return maxRow;
}

int Room::getMaxColumn() const {
    return maxColumn;
}

void Room::setName(const string &name) {
    this->name = name;
}

void Room::setMaxRow(int maxRow) {
    this->maxRow = maxRow;
}

void Room::setMaxColumn(int maxColumn) {
    this->maxColumn = maxColumn;
}
