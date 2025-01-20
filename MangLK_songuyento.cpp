//Liệt kê các số nguyên tố 
#include<iostream>
using namespace std;


const int MAX = 100;
bool isNguyenTo(int& a) {
	if (a < 2)
		return false;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}
void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << i + 1<<" : ";
		cin >> a[i];
	}
}
int main() {
	int n;
	int a[MAX];
	cout << "Tong PT : ";
	cin >> n;
	nhapMang(a, n);
	for(int i=0;i<n;i++){
	if (isNguyenTo(a[i]) == true) {
		cout << a[i];
	}
}
	system("pause");
	return 0;
}