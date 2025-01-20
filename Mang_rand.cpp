#include <iostream>
#include <ctime>
using namespace std;


int ucln(int& max, int& min) {
	int du = max % min;
	if (du == 0) {
		max = max + min;
		cout << "UCLN : " << max << endl;
	}
	while (du != 0) {
		max = min;
		min = du;
		du = max % min;
		max = min;
	}
	cout << "UCLN : " << max << endl;
	return max;
}
void xoaPT(int a[], int& n, int vtrXoa) {
	for (int i = vtrXoa; i < n; i++) {
		a[i] = a[i + 1];
		n = n - 1;
	}
}
void nhapMang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[ " << i + 1 << " ] : ";
		cin >> a[i];
	}
}
void hienThi(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void taoMangNgauNhien(int a[], int& n) {
	int i;
	srand(time(0));
	for (i = 0; i < n; i++) {
		
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl;

}
int main() {
	int a[100], n, vtrXoa;
	cout << "Nhap so phan tu : ";
	cin >> n;
	taoMangNgauNhien(a, n);
	nhapMang(a, n);
	int max = a[0], min = a[0];
	for (int i = 1; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
		if (max < a[i]) {
			max = a[i];
		}
	}
	ucln(max, min);
	
	//ucln(max, min);

	/*hienThi(a, n);
	cout << " Nhap vi tri xoa phan tu : ";
	cin >> vtrXoa;
	xoaPT(a, n,vtrXoa );
	hienThi(a, n);*/

	return 0;
}