#include <iostream>
#include "SoPhuc.h"

using namespace std;

int main() {
    //kiem tra constructor
    SoPhuc sophuc1(5.0);
    cout << "So phuc 1 duoc khoi tao tu so thuc 5.0 la: ";
    sophuc1.Xuat(); //kiem tra ham xuat
    cout << endl;

    SoPhuc sophuc2;
    cout << "\nNhap so phuc 2:\n";
    sophuc2.Nhap(); //kiem tra ham nhap
    cout << "So phuc 2 la: ";
    sophuc2.Xuat();

    cout << endl;
    // kiem tra cac phuong thuc tinh toan
    cout << "Tong: "; sophuc1.Tong(sophuc2).Xuat(); cout << endl;
    cout << "Hieu: "; sophuc1.Hieu(sophuc2).Xuat(); cout << endl;
    cout << "Tich: "; sophuc1.Tich(sophuc2).Xuat(); cout << endl;
    cout << "Thuong: "; sophuc1.Thuong(sophuc2).Xuat(); cout << endl;

    cout << endl;
    // kiem tra nap chong toan tu nhap xuat bang cach nhap lai so phuc 1
    cout << "Nhap So phuc 1: ";
    cin >> sophuc1;
    cout << "So phuc 1 vua nhap: " << sophuc1 << endl;

    cout << endl;
    // kiem tra nap chong toan tu tinh toan
    cout << "So phuc 1 + So phuc 2 = " << sophuc1 + sophuc2 << endl;
    cout << "So phuc 1 - So phuc 2 = " << sophuc1 - sophuc2 << endl;
    cout << "So phuc 1 * So phuc 2 = " << sophuc1 * sophuc2 << endl;
    cout << "So phuc 1 / So phuc 2 = " << sophuc1 / sophuc2 << endl;

    // kiem tra nap chong toan tu so sanh
    if (sophuc1 == sophuc2) {
        cout << "Ket qua: So phuc 1 bang So phuc 2" << endl;
    }
    if (sophuc1 != sophuc2) {
        cout << "Ket qua: So phuc 1 khac So phuc 2" << endl;
    }

    return 0;
}
