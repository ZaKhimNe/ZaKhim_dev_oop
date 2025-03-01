#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
    private:
        float sothuc;
        float soao;
    public:
        SoPhuc (){};
        SoPhuc (float thuc, float ao){
            sothuc = thuc;
            soao = ao;
        }
        void Nhap();
        void Xuat();
        SoPhuc cong(SoPhuc a);
        SoPhuc tru(SoPhuc a);
        SoPhuc nhan(SoPhuc a);
        SoPhuc chia(SoPhuc a);

};

#endif // SOPHUC_H
