#include <bits/stdc++.h>
using namespace std;
//1. cau truc da thuc
struct dathucbac2{
    int a;
    int b;
    int c;
};

struct dathucbac4{
    int a;
    int b;
    int c;
    int d;
    int e;

};

//2. Nhap da thuc
void Nhap(dathucbac2 &dathuc){
    cin >> dathuc.a >> dathuc.b >> dathuc.c;
}

//3. Xuat da thuc
void Xuat2(dathucbac2 dathuc){
    cout << dathuc.a << "x^2 + " << dathuc.b << "x + " << dathuc.c << endl;

}

void Xuat4(dathucbac4 dathuc){
    cout << dathuc.a << "x^4 + " << dathuc.b << "x^3 + " << dathuc.c << "x^2 + " << dathuc.d << "x + " << dathuc.e << endl;
}

//4. Phep tinh da thuc
dathucbac2 tongdathuc(dathucbac2 dathuc1, dathucbac2 dathuc2){
    dathucbac2 dathuctong;
    dathuctong.a = dathuc1.a + dathuc2.a;
    dathuctong.b = dathuc1.b + dathuc2.b;
    dathuctong.c = dathuc1.c + dathuc2.c;
    return dathuctong;
}

dathucbac2 hieudathuc(dathucbac2 dathuc1, dathucbac2 dathuc2){
    dathucbac2 dathuchieu;
    dathuchieu.a = dathuc1.a - dathuc2.a;
    dathuchieu.b = dathuc1.b - dathuc2.b;
    dathuchieu.c = dathuc1.c - dathuc2.c;
    return dathuchieu;
}

dathucbac4 tichdathuc(dathucbac2 dathuc1, dathucbac2 dathuc2){
    dathucbac4 dathuctich;
    dathuctich.a = dathuc1.a*dathuc2.a;
    dathuctich.b = dathuc1.a*dathuc2.b + dathuc1.b*dathuc2.a;
    dathuctich.c = dathuc1.a*dathuc2.c + dathuc1.b*dathuc2.b + dathuc1.c*dathuc2.a;
    dathuctich.d = dathuc1.b*dathuc2.c + dathuc1.c*dathuc2.b;
    dathuctich.e = dathuc1.c*dathuc2.c;
    return dathuctich;
}

//5. Gia tri da thuc tai F(0)
void Xbang0(dathucbac2 dathuc){
    cout << dathuc.c << endl;
}



int main()
{
    dathucbac2 dathuc1;
    dathucbac2 dathuc2;
    cout << "Nhap phan tu da thuc dau tien (a b c): ";
    Nhap(dathuc1);
    cout << "Nhap phan tu da thuc thu hai (a b c): ";
    Nhap(dathuc2);
    dathucbac2 dathuctong = tongdathuc(dathuc1, dathuc2);
    cout << "Tong da thuc: "; Xuat2(dathuctong);
    dathucbac2 dathuchieu = hieudathuc(dathuc1, dathuc2);
    cout << "Hieu da thuc: "; Xuat2(dathuchieu);
    dathucbac4 dathuctich = tichdathuc(dathuc1, dathuc2);
    cout << "Tich da thuc: "; Xuat4(dathuctich);
    cout << "Gia tri da thuc 1 tai F(0)= "; Xbang0(dathuc1);
    cout << "Gia tri da thuc 2 tai F(0)= "; Xbang0(dathuc2);
    return 0;
}
