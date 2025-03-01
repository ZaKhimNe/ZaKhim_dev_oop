#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date current;
    current.Nhap();
    cout << "Nhap n: ";
    int n;
    cin >> n;
    Date cong = current.CongNgay(n);
    cong.Xuat();
    return 0;
}
