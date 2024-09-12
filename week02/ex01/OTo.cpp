#include "OTo.h"
#include <iostream>

using namespace std;

OTo::OTo(string hang, string ten, int nam, float vanToc, int soCho, string kieuDongCo)
    : PhuongTienGiaoThong(hang, ten, nam, vanToc), soChoNgoi(soCho), kieuDongCo(kieuDongCo) {}

void OTo::nhap() {
    PhuongTienGiaoThong::nhap();
    cout << "Nhap so cho ngoi: ";
    cin >> soChoNgoi;
    cout << "Nhap kieu dong co: ";
    cin.ignore(); // Xóa ký tự '\n' khỏi bộ đệm
    getline(cin, kieuDongCo);
}

void OTo::xuat() {
    PhuongTienGiaoThong::xuat();
    cout << "So cho ngoi: " << soChoNgoi << endl;
    cout << "Kieu dong co: " << kieuDongCo << endl;
}

float OTo::vanTocCoSo() const {
    return vanTocToiDa / 4; // Giả sử số bánh xe là 4
}

bool OTo::operator<(const OTo& other) {
    return this->vanTocCoSo() < other.vanTocCoSo();
}
