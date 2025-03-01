#ifndef PHANSO_H
#define PHANSO_H


class PhanSo
{
    private:
        int tuso;
        int mauso;
    public:
        PhanSo(){};
        PhanSo(int tu, int mau){
            tuso = tu;
            mauso = mau;
        }
        void Nhap();
        void Xuat();
        static int gcd(int a, int b);
        void RutGon();
        PhanSo Tong(PhanSo ps);
        PhanSo Hieu(PhanSo ps);
        PhanSo Tich(PhanSo ps);
        PhanSo Thuong(PhanSo ps);


};

#endif // PHANSO_H
