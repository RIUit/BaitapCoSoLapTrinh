#include<iostream>
#include<ctime>
using namespace std;


const int MAX = 100;
void hienThi(int a[], int n) {

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void phatSinhNgauNhien(int a[],int n) {

	srand(time(0));
	cout << "Trong luong kien hang : ";

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10+1 ;
	}
}
void demContainerVaKiemHang(int a[], int n, int limit) {
	int tong1 = 0,tong2=0;
	int dem = 0;
	bool danhDau[10] = { false };

	for (int i = 0; i < n; i++) {   //    2 4 5 10 17 2
		tong1 = tong1 + a[i];
		if (tong1 <= limit) {
			cout << a[i] << " ";
			danhDau[i] = true;
			continue;
		}
		else if (tong1 > limit) {
			tong1 = tong1 - a[i];
		}
		
	}dem++;
	cout << endl;
		for (int i = 0; i < n; i++) {
		tong2=tong2+a[i];
			if (danhDau[i]==false && tong2 <= limit ) {
				cout << a[i] << " ";
				danhDau[i] = true;
				continue;
			}
			else if (danhDau[i]==false && tong2 > limit) {
				tong2 = tong2 - a[i];
			}
			
		} dem++;
	
	
	
	
	cout << "So container su dung : " << dem << endl;
}

int main() {
	int n;
	int a[MAX];
	int limit;
	int dem = 0;

	do{

	cout << "Nhap so luong kien hang : ";
	cin >> n;

	if (n > 10) {
		cout << "Gioi han 10 kien hang ! "<<endl;
	}

	} while (n > 10);

	phatSinhNgauNhien(a, n);
	hienThi(a, n);
	cout << endl;

	cout << "Gioi han container : ";
	cin >> limit;

	demContainerVaKiemHang(a, n, limit);
	
	
	//hienThi(a, n);
	system("pause");
	return 0;
}