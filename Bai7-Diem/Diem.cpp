#include "Diem.h"
#include <iostream>
#include <cmath>
using namespace std;

void Diem::Nhap(){
    cout << "Nhap toa do x: "; cin >> x;
    cout << "Nhap toa do y: "; cin >> y;
}

void Diem::Xuat(){
    cout << "(" << x << ";" << y << ")" << endl;
}

Diem Diem::Move(Diem n){
    int xx = x + n.x;
    int yy = y + n.y;
    Diem kq(xx,yy);
    return kq;
}

float Diem::Distance(Diem n){
    return sqrt((n.x-x)*(n.x-x) + (n.y-y)*(n.y-y));
}
