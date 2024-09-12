#include "NhanVien.h"
#include <iostream>

using namespace std;

NhanVien::NhanVien(string ma, string ten, int namSinh, float heSoLuong, float tienPhuCap)
    : Nguoi(ma, ten), namSinh(namSinh), heSoLuong(heSoLuong), tienPhuCap(tienPhuCap) {}

void NhanVien::nhap() {
    Nguoi::nhap();
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
    cout << "Nhap he so luong: ";
    cin >> heSoLuong;
    cout << "Nhap tien phu cap: ";
    cin >> tienPhuCap;
}

void NhanVien::xuat() {
    Nguoi::xuat();
    cout << "Nam sinh: " << namSinh << endl;
    cout << "He so luong: " << heSoLuong << endl;
    cout << "Tien phu cap: " << tienPhuCap << endl;
    cout << "Luong: " << tinhLuong() << endl;
}

float NhanVien::tinhLuong() const {
    return heSoLuong * 1550 + tienPhuCap;
}

bool NhanVien::operator>(const NhanVien& other) const {
    return this->tinhLuong() > other.tinhLuong();
}
