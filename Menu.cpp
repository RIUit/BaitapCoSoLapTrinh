#include<iostream>
#include<string>
using namespace std;


const int MAX = 100;
bool flagGK = false;
bool flagCK = false;
void nhapDsSv(long mssv[], string hoTen[], int& siSo) {
	do {

		cout << "Nhap si so cua lop : ";
		cin >> siSo;
		if (siSo <= 0 || siSo > MAX) {
			cout << "Nhap ngoai pham vi ! Moi nhap lai ! " << endl;
		}

	} while (siSo <= 0 || siSo > MAX);

	for (int i = 0; i < siSo; i++) {
		cout << "Nhap thong tin sinh vien  " << i + 1 << endl;
		cout << "MSSV : ";
		cin >> mssv[i];
		cout << "Ho va Ten : ";
		cin.ignore();
		getline(cin, hoTen[i]);
	}
}
void xuat1Sv(const long mssv[], const string hoTen[], double diemGK[], double diemCK[], const int siSo, const int index) {
	cout << "==========================================" << endl;
	cout << "MSSV : " << mssv[index] << endl;
	cout << "Ho va Ten : " << hoTen[index] << endl;
	//Diem Giua Ki
	cout << "=Diem Giua Ki : ";
	if (flagGK == true) {
		cout << diemGK[index] << endl;
	}
	else {
		cout << " CHUA CO\n";
	}
	//Diem CUOI KI
	cout << "=Diem Ciua Ki : ";
	if (flagCK == true) {
		cout << diemCK[index] << endl;
	}
	else {
		cout << " CHUA CO\n";
	}
	cout << "==========================================" << endl;
}
void xuatDsSV(const long mssv[], const string hoTen[], double diemGK[], double diemCK[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		xuat1Sv(mssv, hoTen, diemGK, diemCK, siSo, i);
	}
	cout << endl;
}
//Nhap diem Giua Ki 
double nhapDiem(const long mssv[], double diem[], const int siSo, string title = "") {
	for (int i = 0; i < siSo; i++) {
		cout << "Nhap diem " << title << " cho SV " << mssv[i];
		cin >> diem[i];
	}
}

int main() {
	int a[MAX];
	int siSo;
	long mssv[MAX];
	string hoTen[MAX];
	double diemGK[MAX];
	double diemCK[MAX];

	nhapDsSv(mssv, hoTen, siSo);
	xuatDsSV(mssv, hoTen, diemGK, diemCK, siSo);

	system("pause");
	return 0;
}