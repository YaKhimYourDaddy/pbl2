#ifndef NGUOI_H
#define NGUOI_H

#include <string>

class Nguoi {
private:
    std::string maDinhDanh;
    std::string hoTen;

public:
    Nguoi(std::string ma, std::string ten);
    void nhap();
    void xuat();
};

#endif // NGUOI_H
