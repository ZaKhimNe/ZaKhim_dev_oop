#include "ThoiGian.h"
#include <iostream>
using namespace std;

void ThoiGian::Nhap(){
    cout << "Nhap thoi gian (hh mm ss): ";
    cin >> gio >> phut >> giay;
}

void ThoiGian::Xuat(){
    cout << gio << ":" << phut << ":" << giay;
}

ThoiGian ThoiGian::cong(ThoiGian a){
    int second = giay + a.giay;
    int minute = phut + a.phut;
    int hour = gio + a.gio;
    while (second >= 60){
        second -= 60;
        minute++;
    }
    while (minute >= 60){
        minute -= 60;
        hour++;
    }
    while (hour >= 24){
        hour -= 24;
    }
    ThoiGian kq(hour, minute, second);
    return kq;
}
