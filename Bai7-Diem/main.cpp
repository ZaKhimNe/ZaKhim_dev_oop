#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    Diem a, b, n;
    cout << "Nhap diem a: "; a.Nhap();
    cout << "Nhap toa do ban muon di chuyen: "; n.Nhap();
    Diem moved = a.Move(n);
    cout << "Nhap diem b: "; b.Nhap();
    float distance = a.Distance(b);
    cout << "Toa do diem a sau khi di chuyen: ";moved.Xuat();
    cout << "Khoang cach diem a va b: "; cout << distance;
    return 0;
}
