#include "PhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

void PhanSo::Nhap(){
    cout << "Nhap phan so: " << endl;
    cin >> tuso >> mauso;
}

void PhanSo::Xuat(){
    cout << tuso << "/" << mauso << endl;
}

int PhanSo::gcd(int a, int b){
    while (b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return abs(a);
}


void PhanSo::RutGon(){
    int uocchung = gcd (tuso, mauso);
    tuso= tuso/uocchung;
    mauso= mauso/uocchung;

    if (mauso<0){
        tuso = -tuso;
        mauso = -mauso;
    }
}

PhanSo PhanSo::Tong(PhanSo b){
    int tu = tuso*b.mauso + mauso*b.tuso;
    int mau = mauso*b.mauso;
    PhanSo kq(tu, mau);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo b){
    int tu = tuso*b.mauso - mauso*b.tuso;
    int mau = mauso*b.mauso;
    PhanSo kq(tu, mau);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo b){
    int tu = tuso*b.tuso;
    int mau = mauso*b.mauso;
    PhanSo kq(tu, mau);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(PhanSo b){
    int tu = tuso*b.mauso;
    int mau = mauso*b.tuso;
    PhanSo kq(tu, mau);
    kq.RutGon();
    return kq;
}
