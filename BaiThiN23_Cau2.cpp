//Cau 2 De thi cuoi ky Nam 2023
#include<iostream>
#include<ctime>
using namespace std;


const int MAX = 100;
void swap(int& a, int& b) {
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void xepvitr(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] % 2 == 0) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] % 2 != 0) {
					swap(a[i], a[j]);
				}
				else continue;
			}
		}
		
	}
}
void sapXepMangTraiLePhaiChanTang(int a[], const int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] % 2 != 0) {
					if(a[j] < a[i]){
						swap(a[i], a[j]);
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] % 2 == 0) {
					if (a[j] < a[i]) {
						swap(a[i], a[j]);
					}
				}
			}
		}
	}
}
void findSoChanMaxMin(const int a[], const int n) {
	int maxPos = INT16_MIN;
	int minPos = INT16_MAX;
	bool flagt = true;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			flagt = true;
			if (a[i] > maxPos) {
				maxPos = a[i];
			}
			if (a[i] < minPos) {
				minPos = a[i];
			}
		}else flagt = false;
	}
	if (flagt = true) {
		cout << "MAX : " << maxPos << endl;
		cout << "MIN : " << minPos << endl;
	}else cout << "Khong so chan nao trong mang \n";

}
void phatSinhSoNgauNhien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % (40-20)+1 + 20;
	}
}
void hienThi(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	int n;
	int a[MAX];
	srand(time(NULL));

	cout << "Nhap so PT cho mang : ";
	cin >> n;
	phatSinhSoNgauNhien(a, n);
	hienThi(a, n);
	//findSoChanMaxMin(a, n);
	
	xepvitr(a, n);
	sapXepMangTraiLePhaiChanTang(a, n);
	hienThi(a, n);
	
	system("pause");
	return 0;
}