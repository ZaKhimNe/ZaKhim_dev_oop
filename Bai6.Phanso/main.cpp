#include <iostream>
#include "PhanSo.h"

using namespace std;

int main()
{
    PhanSo a, b;
    a.Nhap();
    b.Nhap();
    PhanSo tong = a.Tong(b);
    cout << "Tong la: "; tong.Xuat();
    PhanSo hieu = a.Hieu(b);
    cout << "Hieu la: "; hieu.Xuat();
    PhanSo tich = a.Tich(b);
    cout << "Tich la: "; tich.Xuat();
    PhanSo thuong = a.Thuong(b);
    cout << "Thuong la: "; thuong.Xuat();

    return 0;
}
