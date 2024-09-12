#pragma once
#include <iostream>
#include <string>
using namespace std;

class Candidate {
private:
    string maTS;
    string hoTen;
    string ngaySinh;
    float diemToan;
    float diemVan;
    float diemAnh;

public:
    Candidate(); // Hàm khởi tạo mặc định
    void nhapThongTin(); // Nhập thông tin thí sinh
    void xuatThongTin(); // Xuất thông tin thí sinh
    float tinhTongDiem(); // Tính tổng điểm của thí sinh
};
