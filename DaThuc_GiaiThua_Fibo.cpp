//S(n)=1 + 1*2 + 1*2*3 +.....
#include<iostream>
using namespace std;


void nhapDaTa(int &n) {
	do {
		cout << "Nhap so nguyen n : ";
		cin >> n;
		if (n < 0) {
			cout << "Nhap sai ! \n";
		}

	} while (n < 0);
}
int tinhGiaiThua(int n) {
	int gt = 1;
	for (int i = 1; i <= n; i++) {
		gt = gt * i;
	}
	return gt;
}
int tinhFibo(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	int a = 0;
	int b = 1;
	int res = 0;
	for (int i = 2; i <= n; i++) {
		res = a + b;
		a = b;
		b = res;
	}
	return res;
}
int main() {
	int n;
	double tong = 0;
	
	nhapDaTa(n);
	for (int i = 1; i <= n; i++) {
		tong+=tinhFibo(n)*1.0/tinhGiaiThua(i);// int / int nen can chyen kieu double 1.0
	}
	cout << tong << endl;
	system("pause");
	return 0;
}