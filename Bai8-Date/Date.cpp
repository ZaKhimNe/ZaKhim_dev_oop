#include "Date.h"
#include <iostream>
using namespace std;


void Date::Nhap(){
    cout << "Nhap date: " << endl;
    cin >> ngay >> thang >> nam;
}

void Date::Xuat(){
    cout << ngay << "/" << thang << "/" << nam << endl;
}

bool Date::isleapyear(int nam){
    if ((nam%4==0 && nam%100!=0) || (nam%400==0)){
        return true;
    } else return false;
}

int Date::DayInMonth(int thang, int nam){
    switch (thang){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : return 31;
        case 4 : case 6 : case 11 : return 30;
        case 2 : return isleapyear(nam) ? 29 : 28;
        default: return 0;
    }
}

Date Date::CongNgay(int a){
    int ng = ngay + a;
    int th=thang, n=nam;
    while (ng > DayInMonth(th, n)){
        ng -= DayInMonth(th, n);
        th++;
        if(th > 12){
            th = 1;
            n++;
        }
    }
    Date kq(ng, th, n);
    return kq;
}
