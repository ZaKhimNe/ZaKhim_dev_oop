#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main()
{
    ThoiGian current;
    cout << "Nhap thoi gian hien tai: "; current.Nhap();
    ThoiGian n;
    cout << "Nhap thoi gian can cong: "; n.Nhap();
    ThoiGian Cong = current.cong(n);
    Cong.Xuat();
    return 0;
}
