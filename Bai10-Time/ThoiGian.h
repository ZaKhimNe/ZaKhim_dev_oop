#ifndef THOIGIAN_H
#define THOIGIAN_H


class ThoiGian
{
    private:
        int gio;
        int phut;
        int giay;
    public:
        ThoiGian(){};
        ThoiGian(int hour, int minute, int second){
            gio = hour;
            phut = minute;
            giay = second;
        }
        void Nhap();
        void Xuat();
        ThoiGian cong(ThoiGian a);
};

#endif // THOIGIAN_H
