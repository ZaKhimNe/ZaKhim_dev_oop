#include "QuanLiSV.h"
#include <iostream>
using namespace std;
void QuanLiSV::Nhap(){
    cout << "Nhap ID:"; cin >> ID;
    cout << "Nhap Ten:"; cin >> ten;
    cout << "Nhap Tuoi:"; cin >> tuoi;
    cout << "Nhap diem Toan:"; cin >> math;
    cout << "Nhap diem Van:"; cin >> liter;
    cout << "Nhap diem Anh:"; cin >> eng;
}

void QuanLiSV::Xuat(){
    cout << ten << " " << GPA() << endl;
}



float QuanLiSV::GPA(){
        return (math*2 + liter*2 + eng)/5.0;
}

