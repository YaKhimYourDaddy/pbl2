#ifndef OTO_H
#define OTO_H

#include "PhuongTienGiaoThong.h"
#include <string>

class OTo : public PhuongTienGiaoThong {
private:
    int soChoNgoi;
    std::string kieuDongCo;

public:
    OTo(std::string hang, std::string ten, int nam, float vanToc, int soCho, std::string kieuDongCo);
    void nhap();
    void xuat();
    float vanTocCoSo() const;
    bool operator<(const OTo& other);
};

#endif // OTO_H
