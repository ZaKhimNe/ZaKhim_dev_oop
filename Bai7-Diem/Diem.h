#ifndef DIEM_H
#define DIEM_H


class Diem
{
    private:
        int x;
        int y;
    public:
        Diem (){};
        Diem (int xx, int yy){
            x = xx;
            y = yy;
        }
        void Nhap();
        void Xuat();
        Diem Move(Diem n);
        float Distance(Diem n);
};

#endif // DIEM_H
