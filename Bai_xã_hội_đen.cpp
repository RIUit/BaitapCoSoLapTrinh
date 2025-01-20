/*  An thi lại môn cslt nên phải vay tiền xh đen để đóng tiền học, lãi suất vay là %L/tuần.
    Viết ct nhập:   A: số tiền vay, L: Lãi suất 1 tuần , T: số tuần.
    Tìm ra số tiền tổng cộng An phải trả sau 1 tuần                   */
#include<iostream>
using namespace std;


int main() {
    double soTienVay;
    double laiSuat1Tuan;
    double soTuan;
    double tong=0;
    cout << "Nhap so tien vay : ";
    cin >> soTienVay;
    cout << "Nhap so lai suat 1 tuan : ";
    cin >> laiSuat1Tuan;
    cout << "Nhap so tuan : ";
    cin >> soTuan;

    tong = soTienVay * pow((1 + laiSuat1Tuan), soTuan);
    cout << "So tien thang An can tra : " << tong << endl;
	
}