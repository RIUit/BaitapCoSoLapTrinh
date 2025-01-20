#include<iostream>
using namespace std;


const int MAX = 100;
void swap(int& a, int& b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}
void xepMangTang(int a[], int n) {
	for (int i = 0; i < n-1; i++) {
		int minPos = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minPos]) {
				minPos = j;
			}
			swap(a[i], a[minPos]);
		}
	}
}
void nhapThichNghiCuaCaThe(int a[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap muc do thich nghi cua ca the " << " : ";
		cin >> a[i];
	}
}
void hienThi(const int a[],const int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void findCaTheThichNghi(int a[], int n, const int d) {
	int dem = 0;
	int tong = 0;
	int c1,c3;
	int c2 = 0;
	for (int i = 0; i < n ; i++) {		 //1 1 9  7  4 5 2
		for (int j = n - 1; j > i; j--) {//1 1 2  4  5 7 9
			tong = (a[i] + a[j]) / 2;//5
			if (a[i] + d == a[j] - d && a[i] + d == tong) {
				c1 = a[i];
				c2 = tong;
				c3 = a[j];
				dem++;
			}
		}
		
	}
	cout << c1 <<" " << c2 <<" " << c3 << endl;

	
}
	int main() {
	int a[MAX];
	int n;
	int d;	//	d la muc do thich nghi
	cout << "Nhap muc do thich nghi : ";
	cin >> d;
	cout << "Nhap so luong ca the : ";
	cin >> n;
	nhapThichNghiCuaCaThe(a, n);
	xepMangTang(a, n);
	findCaTheThichNghi(a, n, d);
	hienThi(a, n);

	system("pause");
	return 0;
}