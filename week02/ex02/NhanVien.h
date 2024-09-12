#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Nguoi.h"

class NhanVien : public Nguoi {
private:
    int namSinh;
    float heSoLuong;
    float tienPhuCap;

public:
    NhanVien(std::string ma, std::string ten, int namSinh, float heSoLuong, float tienPhuCap);
    void nhap();
    void xuat();
    float tinhLuong() const;
    bool operator>(const NhanVien& other) const;
};

#endif // NHANVIEN_H
