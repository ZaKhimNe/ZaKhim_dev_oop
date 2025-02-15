#include <bits/stdc++.h>

using namespace std;
//1. Cau tao so phuc
struct SoPhuc{
    float sothuc;
    float soao;
};
//2. Nhap so phuc
void Nhap(SoPhuc &a){
    cout << "So Thuc: "; cin >> a.sothuc;
    cout << "So Ao: "; cin >> a.soao;
}
//3. Xuat so phuc
void Xuat(SoPhuc a){
    if (a.soao > 0) cout << a.sothuc <<" + " << a.soao << "i" << endl;
    else cout << a.sothuc <<" - " << -a.soao << "i" << endl;
}
//4. Phep tinh so phuc
SoPhuc Cong(SoPhuc a, SoPhuc b){
    SoPhuc CongSoPhuc;
    CongSoPhuc.sothuc = a.sothuc + b.sothuc;
    CongSoPhuc.soao = a.soao +  b.soao;
    return CongSoPhuc;
}

SoPhuc Tru(SoPhuc a, SoPhuc b){
    SoPhuc TruSoPhuc;
    TruSoPhuc.sothuc = a.sothuc - b.sothuc;
    TruSoPhuc.soao = a.soao -  b.soao;
    return TruSoPhuc;
}

SoPhuc Nhan(SoPhuc a, SoPhuc b){
    SoPhuc NhanSoPhuc;
    NhanSoPhuc.sothuc = a.sothuc*b.sothuc - a.soao*b.soao;
    NhanSoPhuc.soao = a.sothuc*b.soao -  b.sothuc*a.soao;
    return NhanSoPhuc;
}

SoPhuc Chia(SoPhuc a, SoPhuc b){
    SoPhuc ChiaSoPhuc;
    ChiaSoPhuc.sothuc = (a.sothuc*b.sothuc + a.soao*b.soao) / (b.sothuc*b.sothuc + b.soao*b.soao);
    ChiaSoPhuc.soao = (b.sothuc*a.soao - a.sothuc*b.soao) / (b.sothuc*b.sothuc + b.soao*b.soao);
    return ChiaSoPhuc;
}

int main()
{
    SoPhuc a, b;
    cout << "Nhap so phuc a: "; Nhap(a);
    cout << "Nhap so phuc b: "; Nhap(b);
    cout << "Cong: "; SoPhuc CongSoPhuc = Cong(a,b); Xuat(CongSoPhuc);
    cout << "Tru: "; SoPhuc TruSoPhuc = Tru(a,b); Xuat(TruSoPhuc);
    cout << "Nhan: "; SoPhuc NhanSoPhuc = Nhan(a,b); Xuat(NhanSoPhuc);
    cout << "Chia: "; SoPhuc ChiaSoPhuc = Chia(a,b); Xuat(ChiaSoPhuc);
}
