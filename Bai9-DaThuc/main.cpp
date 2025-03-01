#include <iostream>
#include "DaThucBac2.h"
using namespace std;

int main()
{
    Dathuc x, y;
    x.Nhap();
    y.Nhap();
    Dathuc Cong = x.cong(y);
    cout << "Tong: "; Cong.Xuat();
    Dathuc Tru = x.tru(y);
    cout << "Hieu: ";Tru.Xuat();
    Dathuc Nhan = x.nhan(y);
    cout << "Tich: ";Nhan.Xuat4();


    return 0;
}
