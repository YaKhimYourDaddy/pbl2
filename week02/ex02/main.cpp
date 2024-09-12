#include "NhanVien.h"
#include <iostream>

using namespace std;

int main() {
    NhanVien nv1("001", "Nguyen Van A", 1985, 3.5, 500);
    NhanVien nv2("002", "Le Thi B", 1990, 3.8, 300);

    nv1.xuat();
    cout << endl;
    nv2.xuat();

    cout << endl;
    if (nv1 > nv2) {
        cout << "Nhan vien 1 co luong cao hon nhan vien 2." << endl;
    } else {
        cout << "Nhan vien 1 khong co luong cao hon nhan vien 2." << endl;
    }

    return 0;
}
