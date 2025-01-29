#include <bits/stdc++.h>

using namespace std;
//1. cau truc thoi gian
struct thoigian{
    int gio;
    int phut;
    int giay;

};
//2. Nhap thoigian
void Nhap(thoigian &current){
    cin >> current.gio >> current.phut >> current.giay;
}

//3. Xuat thoi gian
void Xuat(thoigian current){
    cout << current.gio << ":" << current.phut << ":" << current.giay << endl;
}




thoigian Congthoigian(thoigian current, thoigian n){
    thoigian thoigiansaucong = current;
    thoigiansaucong.giay += n.giay;
    thoigiansaucong.phut += n.phut;
    thoigiansaucong.gio += n.gio;
    while (thoigiansaucong.giay >= 60){
        thoigiansaucong.giay -= 60;
        thoigiansaucong.phut++;
    }
    while (thoigiansaucong.phut >= 60){
        thoigiansaucong.phut -= 60;
        thoigiansaucong.gio++;
        if (thoigiansaucong.gio >= 24){
            thoigiansaucong.gio -= 24;
        }
    }
    return thoigiansaucong;
}




int main()
{
    thoigian hientai;
    thoigian n;
    cout << "Nhap thoi gian hien tai:(hh mm ss) ";
    Nhap(hientai);
    cout << "Nhap thoi gian ban muon cong:(hh mm ss) ";
    Nhap(n);
    thoigian thoigiansaucong = Congthoigian(hientai, n);
    cout << "Thoi gian sau khi cong: "; Xuat(thoigiansaucong);
    return 0;
}
