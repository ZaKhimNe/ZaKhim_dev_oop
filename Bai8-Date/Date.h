#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        Date (){};
        Date (int ng, int th, int n){
            ngay = ng;
            thang = th;
            nam = n;
        };
        void Nhap();
        void Xuat();
        bool isleapyear(int nam);
        int DayInMonth(int thang, int nam);
        Date CongNgay(int n);

};

#endif // DATE_H
