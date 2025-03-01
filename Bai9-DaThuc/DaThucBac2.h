#ifndef Dathuc_H
#define Dathuc_H


class Dathuc
{
    private:
        int a;
        int b;
        int c;
        int d;
        int e;
    public:
        Dathuc(){
        a=b=c=d=e=0;
        }
        Dathuc(int aa, int bb, int cc){
         a = aa;
         b = bb;
         c = cc;
        }
        Dathuc(int aa, int bb, int cc, int dd, int ee){
         a = aa;
         b = bb;
         c = cc;
         d = dd;
         e = ee;
        }
        void Nhap();
        void Xuat();
        void Xuat4();
        Dathuc cong(Dathuc x);
        Dathuc tru(Dathuc x);
        Dathuc nhan(Dathuc x);
        Dathuc chia(Dathuc x);


};

#endif // Dathuc_H
