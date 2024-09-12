#include "Candidate.h"

// Hàm khởi tạo mặc định
Candidate::Candidate() : diemToan(0), diemVan(0), diemAnh(0) {}

// Hàm nhập thông tin thí sinh
void Candidate::nhapThongTin() {
    cout << "Nhập mã thí sinh: ";
    cin >> maTS;
    cin.ignore(); // Xóa bộ nhớ đệm
    cout << "Nhập họ tên thí sinh: ";
    getline(cin, hoTen);
    cout << "Nhập ngày sinh (dd/mm/yyyy): ";
    getline(cin, ngaySinh);
    cout << "Nhập điểm Toán: ";
    cin >> diemToan;
    cout << "Nhập điểm Văn: ";
    cin >> diemVan;
    cout << "Nhập điểm Anh: ";
    cin >> diemAnh;
}

// Hàm xuất thông tin thí sinh
void Candidate::xuatThongTin() {
    cout << "Mã thí sinh: " << maTS << endl;
    cout << "Họ tên: " << hoTen << endl;
    cout << "Ngày sinh: " << ngaySinh << endl;
    cout << "Điểm Toán: " << diemToan << endl;
    cout << "Điểm Văn: " << diemVan << endl;
    cout << "Điểm Anh: " << diemAnh << endl;
}

// Hàm tính tổng điểm của thí sinh
float Candidate::tinhTongDiem() {
    return diemToan + diemVan + diemAnh;
}
