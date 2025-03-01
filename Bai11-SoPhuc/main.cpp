#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc a, b;
    cout << "Nhap so phuc a: "; a.Nhap();
    cout << "Nhap so phuc b: "; b.Nhap();
    SoPhuc Cong = a.cong(b);
    cout <<"Tong: "; Cong.Xuat();
    SoPhuc Tru = a.tru(b);
    cout << "Hieu: "; Tru.Xuat();
    SoPhuc Nhan = a.nhan(b);
    cout << "Tich: "; Nhan.Xuat();
    SoPhuc Chia = a.chia(b);
    cout << "Thuong: "; Chia.Xuat();
    return 0;
}
