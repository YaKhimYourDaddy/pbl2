#include "Candidate.h"
#include <vector>

int main() {
    int n;
    cout << "Nhập số lượng thí sinh: ";
    cin >> n;

    vector<Candidate> danhSachThiSinh(n);

    // Nhập thông tin các thí sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhập thông tin cho thí sinh thứ " << i + 1 << ":\n";
        danhSachThiSinh[i].nhapThongTin();
    }

    // In ra thông tin các thí sinh có tổng điểm > 15
    cout << "\nDanh sách thí sinh có tổng điểm lớn hơn 15:\n";
    for (int i = 0; i < n; ++i) {
        if (danhSachThiSinh[i].tinhTongDiem() > 15) {
            danhSachThiSinh[i].xuatThongTin();
            cout << "Tổng điểm: " << danhSachThiSinh[i].tinhTongDiem() << "\n\n";
        }
    }

    return 0;
}
