#include<iostream>
using namespace std;


const int MAX = 100;
void chenPT(int a[], int n, int viTriChen,int soChen) {
	for (int i = n; i>viTriChen; i--) {
		a[i] = a[i-1];
	}
	a[viTriChen] = soChen;
	n=n++;
}
void xoaPT(int a[], int &n, int &viTriXoa) {
	for (int i = viTriXoa; i < n; i++) {
		a[i] = a[i + 1];
		
	}
	n = n - 1;
}
void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << " : ";
		cin >> a[i];
	}
}
void hienThi(int a[], int n) {
	for (int i = 0; i <n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}
int main() {
	int a[MAX];
	int n, viTriXoa;
	//Nhap pt cho mang
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;

	nhapMang(a, n);

	//Xoa pt trong mang

	/*cout << "Nhap vi tri xoa PT : ";
	cin >> viTriXoa;

	xoaPT(a, n, viTriXoa);

	hienThi(a, n);*/
	int viTriChen,sochen;
	cout << "Nhap vi tri chen : ";
	cin >> viTriChen;
	cout << "Nhap so can chen : ";
	cin >> sochen;
	chenPT(a, n, viTriChen,sochen);
	hienThi(a, n);
	system("pause");
	return 0;
}