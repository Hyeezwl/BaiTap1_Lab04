#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc(double thuc, double ao)
{
    iThuc = thuc;
    iAo = ao;
}

SoPhuc::~SoPhuc()
{
    //dtor
}

void SoPhuc::Nhap(){
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat(){
    if (iAo < 0) {
        cout << iThuc << " - " << -iAo << "i";
    } else{
        cout << iThuc << " + " << iAo << "i";
    }
}
SoPhuc SoPhuc::Tong(SoPhuc sophuc2){
    SoPhuc KetQua;
    KetQua.iThuc = iThuc + sophuc2.iThuc;
    KetQua.iAo = iAo + sophuc2.iAo;
    return KetQua;
}
SoPhuc SoPhuc::Hieu(SoPhuc sophuc2){
    SoPhuc KetQua;
    KetQua.iThuc = iThuc - sophuc2.iThuc;
    KetQua.iAo = iAo - sophuc2.iAo;
    return KetQua;
}
SoPhuc SoPhuc::Tich(SoPhuc sophuc2){
    SoPhuc KetQua;
    KetQua.iThuc = (iThuc * sophuc2.iThuc) - (iAo * sophuc2.iAo);
    KetQua.iAo = (iThuc *sophuc2.iAo) + (iAo * sophuc2.iThuc);
    return KetQua;
}
SoPhuc SoPhuc::Thuong(SoPhuc sophuc2){
    SoPhuc KetQua;
    double MauSo = (sophuc2.iThuc * sophuc2.iThuc) + (sophuc2.iAo * sophuc2.iAo);
    if (MauSo == 0) {
        cout << "Loi khi chia cho 0" << endl;
        return KetQua; //tra ve 0 + 0i
    }
    KetQua.iThuc = ((iThuc * sophuc2.iThuc) + (iAo * sophuc2.iAo)) / MauSo;
    KetQua.iAo = ((iAo * sophuc2.iThuc) - (iThuc * sophuc2.iAo)) / MauSo;
    return KetQua;
}
//nap chong toan tu
SoPhuc SoPhuc::operator+(SoPhuc sophuc2) {
    return Tong(sophuc2);
}

SoPhuc SoPhuc::operator-(SoPhuc sophuc2) {
    return Hieu(sophuc2);
}

SoPhuc SoPhuc::operator*(SoPhuc sophuc2) {
    return Tich(sophuc2);
}

SoPhuc SoPhuc::operator/(SoPhuc sophuc2) {
    return Thuong(sophuc2);
}

bool SoPhuc::operator==(SoPhuc sophuc2) {
    if (iThuc == sophuc2.iThuc && iAo == sophuc2.iAo) {
        return true;
    }
    return false;
}

bool SoPhuc::operator!=(SoPhuc sophuc2) {
    // tra ve true neu ko bang nhau
    return !(*this == sophuc2);
}

//toan tu nhap xuat
istream& operator>>(istream& is, SoPhuc& sophuc) {
    is >> sophuc.iThuc >> sophuc.iAo;
    return is;
}

ostream& operator<<(ostream& os, SoPhuc sophuc) {
    if (sophuc.iAo < 0) {
        os << sophuc.iThuc << " - " << -sophuc.iAo << "i";
    } else {
        os << sophuc.iThuc << " + " << sophuc.iAo << "i";
    }
    return os;
}
