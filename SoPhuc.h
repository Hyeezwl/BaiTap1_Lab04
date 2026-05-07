#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc
{
    public:
        SoPhuc(double thuc = 0, double ao = 0);
        virtual ~SoPhuc();
        void Nhap();
        void Xuat();

        SoPhuc Tong(SoPhuc sophuc2);
        SoPhuc Hieu(SoPhuc sophuc2);
        SoPhuc Tich(SoPhuc sophuc2);
        SoPhuc Thuong(SoPhuc sophuc2);

        SoPhuc operator+ (SoPhuc sophuc2);
        SoPhuc operator- (SoPhuc sophuc2);
        SoPhuc operator* (SoPhuc sophuc2);
        SoPhuc operator/ (SoPhuc sophuc2);

        bool operator== (SoPhuc sophuc2);
        bool operator!= (SoPhuc sophuc2);
        //nap chong toan tu nhap xuat su dung friend de truy cap iThuc va iAo
        friend istream& operator>> (istream& is, SoPhuc& sophuc);
        friend ostream& operator<< (ostream& os, SoPhuc sophuc);
    protected:

    private:
        double iThuc;
        double iAo;
};

#endif // SOPHUC_H
