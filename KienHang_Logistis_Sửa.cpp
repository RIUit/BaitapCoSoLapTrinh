#include<iostream>
#include<ctime>
using namespace std;

const int MAX = 10;
void phatSinhSoNgauNhien(int a[], int n) {
	srand(time(NULL));
	cout << "Trong luong kien hang : ";
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10 + 1;
	}
}
void hienThi(const int a[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void demContainerVaKienHang(int a[], const int n, const int limit) {
	bool danhDau[10] = { false };
	int demKH = 0;
	int demContainer = 0;			// 1 2 5 9 11 20 50  4 
	cout << "Danh sach kien hang : " << endl;
	for (int i = 0; i < n; i++) {	//dem container
		int tongKienHang = 0;
		for (int j = 0; j < n; j++) {//dem kien hang
			if (!danhDau[j] && tongKienHang + a[j] <= limit) {
				cout << a[j] << " ";//1
				tongKienHang += a[j];//1
				danhDau[j] = true;
			}
			
		}
		if (tongKienHang != 0) {
			demContainer++;
			cout << "\nCONTAINER : " << demContainer << endl;
		}
	}
	for (int i = 0; i < n; i++) {
		if (danhDau[i]) {
			demKH++;
		}
	}
	cout << "So Container can dung : " << demContainer << endl;
	cout << "So kien hang da cho : " << demKH << endl;

}
int main() {
	int a[MAX];
	int n;
	int limit;

	do {
		cout << "Nhap so luong kien hang : ";
		cin >> n;

		if (n < 0 || n>10) {
			cout << "Vuoc muc gioi han kien hang (10 kien hang!)" << endl;
		}

	} while (n < 0 || n>10);

	phatSinhSoNgauNhien(a, n);
	hienThi(a, n);
	cout << endl;

	cout << "Nhap gioi han container : ";
	cin >> limit;

	demContainerVaKienHang(a, n, limit);
	hienThi(a, n);
	system("pause");
	return 0;
}