#include <iostream>
#include "QuanLiSV.h"

using namespace std;


void GPAcaonhat(QuanLiSV ds[], int n){
    int diemtbmax = ds[0].GPA();
    int stt = 0;
    for (int i =1; i < n; i++){
        if (ds[i].GPA() > diemtbmax){
            diemtbmax = ds[i].GPA();
            stt = i;
        }
    }
    cout << "Sinh vien co GPA cao nhat: " << stt + 1 << endl;

    ds[stt].Xuat();
}


int main()
{
    int n;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    QuanLiSV *ds = new QuanLiSV[n];
    for (int i =0; i < n; i ++){
        cout << "Nhap thong tin cho sinh vien " << i+1 << ": " << endl;
        ds[i].Nhap();
    }

    cout << "Danh sach sinh vien va GPA: " << endl;
    for (int i =0; i < n; i++){
        cout << "Sinh vien " << i+1;
        ds[i].Xuat();
    }
    GPAcaonhat(ds, n);

    return 0;
}
