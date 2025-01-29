#include <bits/stdc++.h>
using namespace std;


//1. Dinh nghia phan so
struct PhanSo{
    int tuso;
    int mauso;
};

//2. Nhap Phan so
void Nhap(PhanSo &a){
    cout << "Nhap tu so: ";
    cin >> a.tuso;
    cout << "Nhap mau so: ";
    cin >> a.mauso;
}

//3. Xuat phan so
void Xuat(PhanSo a){
    cout << a.tuso << "/" << a.mauso << endl;
}

//4. Tim uoc chung lon nhat
int gcd(int a, int b){
    int du;
    while (b!=0){
        du = a%b;
        a = b;
        b = du;
    }
    return abs(a);
}

//5. Rut gon phan so

void RutGon(PhanSo &a){
    int ucln = gcd(a.tuso, a.mauso);
    a.tuso /= ucln;
    a.mauso /= ucln;

    if (a.mauso < 0){
        a.tuso = -a.tuso;
        a.mauso = -a.mauso;
    }

}

//6. Tim Hieu, Tich, Thuong
PhanSo HieuPhanSo(PhanSo a, PhanSo b){
    PhanSo PhanSoHieu;
    PhanSoHieu.tuso = a.tuso*b.mauso - a.mauso*b.tuso;
    PhanSoHieu.mauso = a.mauso*b.mauso;
    RutGon(PhanSoHieu);
    return PhanSoHieu;
}

PhanSo TichPhanSo(PhanSo a, PhanSo b){
    PhanSo PhanSoTich;
    PhanSoTich.tuso = a.tuso*b.tuso;
    PhanSoTich.mauso = a.mauso*b.mauso;
    RutGon(PhanSoTich);
    return PhanSoTich;
}

PhanSo ThuongPhanSo(PhanSo a, PhanSo b){
    PhanSo PhanSoThuong;
    PhanSoThuong.tuso = a.tuso*b.mauso;
    PhanSoThuong.mauso = a.mauso*b.tuso;
    RutGon(PhanSoThuong);
    return PhanSoThuong;
}

//7. Chay chuong trinh
int main(){
    PhanSo a;
    PhanSo b;
    Nhap(a);
    Nhap(b);
    PhanSo c = HieuPhanSo(a,b);
    cout << "Hieu Phan So: "; Xuat(c);
    PhanSo d = TichPhanSo(a,b);
    cout << "Tich Phan So: "; Xuat(d);
    PhanSo e = ThuongPhanSo(a,b);
    cout << "Thuong Phan So: "; Xuat(e);
}
