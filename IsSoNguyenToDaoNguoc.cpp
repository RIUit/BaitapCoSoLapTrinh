//Kiem tra so nguyen n co phai la so nguyen to dao nguoc khong ?
#include<iostream>
using namespace std;


void nhapDaTa(int& n) {
	do {
		cout << "Nhap so nguyen n : ";
		cin >> n;
		if (n < 0) {
			cout << "Nhap sai ! \n";
		}

	} while (n < 0);
}
int tinhSDN(int n) {
	int tam = n;
	int sdn = 0;
	while (tam != 0) {
	sdn = sdn * 10 + tam % 10;
	tam = tam / 10;
	}
	return sdn;
}
bool isSoNguyenTo(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
	
}
bool isSoNguyenToDaonguoc(int n) {
	int sdn = tinhSDN(n);
	if (isSoNguyenTo(n)==true && isSoNguyenTo(sdn)==true) {
		return true;
	}return false;
}
int main() {
	int n;

	nhapDaTa(n);
	for (int i = 1; i <= n; i++) {
		if (isSoNguyenToDaonguoc(i) == true) {
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}