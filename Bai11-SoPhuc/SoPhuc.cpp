#include "SoPhuc.h"
#include <iostream>
using namespace std;

void SoPhuc::Nhap(){
    cin >> sothuc >> soao;
}

void SoPhuc::Xuat(){
    cout << sothuc <<" + " << soao << "i" << endl;
}

SoPhuc SoPhuc::cong(SoPhuc a){
    float thuc = sothuc + a.sothuc;
    float ao = soao + a.soao;
    SoPhuc kq(thuc, ao);
    return kq;
}

SoPhuc SoPhuc::tru(SoPhuc a){
    float thuc = sothuc - a.sothuc;
    float ao = soao - a.soao;
    SoPhuc kq(thuc, ao);
    return kq;
}

    SoPhuc SoPhuc::nhan(SoPhuc a){
        float thuc = sothuc * a.sothuc - soao * a.soao;
        float ao = sothuc * a.soao + soao * a.sothuc;
    SoPhuc kq(thuc, ao);
    return kq;
}

SoPhuc SoPhuc::chia(SoPhuc a){
    float thuc = (sothuc*a.sothuc + soao*a.soao) / (a.sothuc*a.sothuc + a.soao*a.soao);
    float ao = (a.sothuc*soao - sothuc*a.soao) / (a.sothuc*a.sothuc + a.soao*a.soao);
    SoPhuc kq(thuc, ao);
    return kq;
}
