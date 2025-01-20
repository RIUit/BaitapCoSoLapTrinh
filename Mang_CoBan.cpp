#include <iostream>
#include <ctime>
using namespace std;

//const int MAX = 50;
#define MAX 50


/*
Input: None
Output: An integer in the range 1 to 50
*/
int inputData() {
	int n;
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX) {
			cout << "Nhap sai! Nhap lai!\n";
		}
	} while (n <= 0 || n > MAX);
	return n;
}

void inputArr(int a[], int& n) {

	n = inputData();

	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void genArrRand(int a[], int& n) {
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX) {
			cout << "Nhap sai! Nhap lai!\n";
		}
	} while (n <= 0 || n > MAX);

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;//[1-100]
	}
}

void outputArr(const int a[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

/*
Input: a, n
Output: a, n
*/
void reverseArr(int a[], const int n) {
	int l = 0, r = n - 1;
	while (l < r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}
}

bool delEleByIndex(int a[], int& n, const int index = 0) {
	if (index >= 0 && index < n) {
		for (int i = index; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		n = n - 1;
		return true;
	}
	return false;
}

bool insertBefore(int a[], int& n, const int index, const int x) {
	if (index >= 0 && index < n && n < MAX) {
		for (int i = n; i > index; i--) {
			a[i] = a[i - 1];
		}
		a[index] = x;
		n = n + 1;
		return true;
	}
	return false;
}

int find(const int a[], const int n, const int key) {
	for (int i = 0; i < n; i++) {
		if (a[i] == key)
			return i;
	}
	return -1;
}

void sortArr(int a[], const int n) {
	for (int i = 0; i < n - 1; i++) {
		int minPos = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minPos])
				minPos = j;
		}
		swap(a[i], a[minPos]);
	}
}

int main() {
	int a[MAX], n;
	srand(time(NULL));
	/*inputArr(a, n);*/
	genArrRand(a, n);//[1-100]
	outputArr(a, n);



	/*cout << "=============XOA PHAN TU==========\n";*/
	/*int index;
	cout << "Nhap vi tri phan tu can xoa: ";
	cin >> index;*/
	/*bool res = delEleByIndex(a, n, index-1);
	if (res == true) {
		cout << "Xoa thanh cong!/nMang sau khi xoa: ";
		outputArr(a, n);
	}
	else {
		cout << "Xoa KHONG thanh cong!\n";
	}*/
	/*cout << "=============THEM PHAN TU==========\n";
	int index2, x;
	cout << "Nhap vi tri can them: ";
	cin >> index2;
	cout << "Nhap gia tri can them: ";
	cin >> x;

	if (insertBefore(a, n, index2 - 1, x) == true) {
		cout << "Them thanh cong!/nMang sau khi them: ";
		outputArr(a, n);
	}
	else
		cout << "Them KHONG thanh cong!\n";*/

		/*cout << "=============TIM KIEM VA XOA==========\n";
		int key;
		cout << "Nhap gia tri can tim: ";
		cin >> key;
		int res = find(a, n, key);

		if (res != -1) {
			delEleByIndex(a, n, res);
			cout << "Mang sau khi tim va xoa: ";
			outputArr(a, n);
		}
		else
			cout << "KHONG tim thay!\n";*/

	cout << "=============SAP XEP==========\n";
	sortArr(a, n);
	outputArr(a, n);

	reverseArr(a, n);
	outputArr(a, n);

	return 0;
}