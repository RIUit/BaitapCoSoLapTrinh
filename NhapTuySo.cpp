#include <iostream>
using namespace std;

int main() {
	int x = 0;
	int tong = 0;
	int max = 0;
	int min = 0;
	cout << "Nhap so x: ";
	while (tong == 0) {
		cin >> x;
		max = x;
		min = x;
		tong += x;
	}
	cout << "Nhap so x: ";
	while (cin >> x) {
		if (x > max) {
			max = x;
		}
		if (x < min) {
			min = x;
		}
		tong += x;
		cout << "Nhap so x: ";
	}
	cout << "Tong la: " << tong << endl;
	cout << "So lon nhat la: " << max << endl;
	cout << "So nho nhat la: " << min << endl;

}