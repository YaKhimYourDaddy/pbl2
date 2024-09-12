#ifndef PHUONGTIENGIAOTHONG_H
#define PHUONGTIENGIAOTHONG_H

#include <string>

class PhuongTienGiaoThong {
protected:
    std::string hangSanXuat;
    std::string tenPhuongTien;
    int namSanXuat;
    float vanTocToiDa;

public:
    PhuongTienGiaoThong(std::string hang, std::string ten, int nam, float vanToc);
    void nhap();
    void xuat();
};

#endif // PHUONGTIENGIAOTHONG_H
