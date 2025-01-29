#include <bits/stdc++.h>

using namespace std;


struct date{
    int ngay;
    int thang;
    int nam;
};
//1. Kiem tra nam nhuan
bool isLeapYear(int n){
    return (n%4 == 0 && n%100 != 0 || n%400 == 0);
}

//2. So ngay trong thang
int DayinMonth(int month, int year){
    switch (month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
    case 4: case 6: case 9: case 11: return 30;
    case 2: return isLeapYear(year) ?  29: 28;
    }
}

//3. Ham cong ngay voi mot so
date DaCongNgay(date current, int n){
    date saukhicong = current;
    saukhicong.ngay += n;
    while (saukhicong.ngay > DayinMonth(saukhicong.thang, saukhicong.nam)){
            saukhicong.ngay -= DayinMonth(saukhicong.thang, saukhicong.nam);
            saukhicong.thang++;
            if(saukhicong.thang > 12){
                saukhicong.thang = 1;
                saukhicong.nam++;
            }
        }
    return saukhicong;


}

int main()
{
    date today;
    date after;
    int n;
    cout << "Nhap ngay (dd mm yyyy): ";
    cin >> today.ngay >> today.thang >> today.nam;
    if (today.thang < 1 || today.thang > 12 || today.ngay < 1 || today.ngay > DayinMonth(today.thang, today.nam)){
        cout << "Ngay khong hop le, vui long nhap lai!" << endl;;
        } else {
        cout << "Nhap so n: ";
        cin >> n;
        after = DaCongNgay(today, n);
        cout << after.ngay << "/" << after.thang << "/" << after.nam << endl;
         }


    return 0;
}
