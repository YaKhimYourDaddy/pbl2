#include "Nguoi.h"
#include <iostream>

using namespace std;

Nguoi::Nguoi(string ma, string ten) : maDinhDanh(ma), hoTen(ten) {}

void Nguoi::nhap() {
    cout << "Nhap ma dinh danh: ";
    getline(cin, maDinhDanh);
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
}

void Nguoi::xuat() {
    cout << "Ma dinh danh: " << maDinhDanh << endl;
    cout << "Ho ten: " << hoTen << endl;
}
