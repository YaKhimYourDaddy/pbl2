#include "PhuongTienGiaoThong.h"
#include <iostream>

using namespace std;

PhuongTienGiaoThong::PhuongTienGiaoThong(string hang, string ten, int nam, float vanToc) {
    hangSanXuat = hang;
    tenPhuongTien = ten;
    namSanXuat = nam;
    vanTocToiDa = vanToc;
}

void PhuongTienGiaoThong::nhap() {
    cout << "Nhap hang san xuat: ";
    getline(cin, hangSanXuat);
    cout << "Nhap ten phuong tien: ";
    getline(cin, tenPhuongTien);
    cout << "Nhap nam san xuat: ";
    cin >> namSanXuat;
    cout << "Nhap van toc toi da: ";
    cin >> vanTocToiDa;
    cin.ignore(); // Xóa ký tự '\n' khỏi bộ đệm
}

void PhuongTienGiaoThong::xuat() {
    cout << "Hang san xuat: " << hangSanXuat << endl;
    cout << "Ten phuong tien: " << tenPhuongTien << endl;
    cout << "Nam san xuat: " << namSanXuat << endl;
    cout << "Van toc toi da: " << vanTocToiDa << " km/h" << endl;
}
