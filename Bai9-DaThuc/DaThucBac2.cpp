#include "DaThucBac2.h"
#include <iostream>
using namespace std;

void Dathuc::Nhap(){
    cout << "Nhap he so x^2: "; cin >> a;
    cout << "Nhap he so x: "; cin >> b;
    cout << "Nhap he so cuoi: "; cin >> c;
}

void Dathuc::Xuat() {
        cout << a << "x^2 + " << b << "x + " << c << endl;
}
 void Dathuc::Xuat4(){
     cout << a << "x^4 + " << b << "x^3 + " << c << "x^2 + " << d << "x + " << e << endl;
    }


Dathuc Dathuc::cong(Dathuc x){
    int aa = a + x.a;
    int bb = b + x.b;
    int cc = c + x.c;
    Dathuc kq(aa, bb, cc);
    return kq;
}

Dathuc Dathuc::tru(Dathuc x){
    int aa = a - x.a;
    int bb = b - x.b;
    int cc = c - x.c;
    Dathuc kq(aa, bb, cc);
    return kq;
}

Dathuc Dathuc::nhan(Dathuc x){
    int aa = a * x.a;
    int bb = a * x.b + b * x.a;
    int cc = a * x.c + b * x.b + c * x.a;
    int dd = b * x.c + c * x.b;
    int ee = c * x.c;
    Dathuc kq(aa, bb, cc, dd, ee);
    return kq;
}
