#ifndef QUANLISV_H
#define QUANLISV_H
#include <iostream>
#include <string>
using namespace std;

class QuanLiSV
{
    private:
        int ID;
        string ten;
        int tuoi;
        int math;
        int liter;
        int eng;
    public:
        QuanLiSV (){};
        QuanLiSV (int IDD, string tenn, int tuoii, int mathh, int literr, int engg){
            ID = IDD;
            ten = tenn;
            tuoi = tuoii;
            math = mathh;
            liter = literr;
            eng = engg;
        }
        ~QuanLiSV(){};
        void Nhap();
        void Xuat();
        float GPA();

};

#endif // QUANLISV_H
