#include <iostream>
#include <string>
using namespace std;


const int MAX = 100;
bool flagGk = false;
bool flagCk = false;


void nhapDsSv(long mssv[], string hoTen[], int& siSo) {
	do {
		cout << "Nhap vao si so lop: ";
		cin >> siSo;
		if (siSo <= 0 || siSo > MAX)
			cout << "Si so khong hop le! Nhap lai!\n";
	} while (siSo <= 0 || siSo > MAX);

	for (int i = 0; i < siSo; i++) {
		cout << "Nhap thong tin cua SV " << i + 1 << ": \n";
		cout << "Nhap ID: ";
		cin >> mssv[i];
		cout << "Nhap Ho ten: ";
		cin.ignore();
		getline(cin, hoTen[i]);
	}
}

void xuat1Sv(const long mssv[], const string hoTen[], const double diemGk[], const double diemCk[], const int siSo, const int index) {
	cout << "=====================\n";
	cout << "MSSV: " << mssv[index] << endl;
	cout << "Ho ten: " << hoTen[index] << endl;
	cout << "Diem GK: ";
	if (flagGk == true)
		cout << diemGk[index] << endl;
	else
		cout << "CHUA CO\n";
	cout << "Diem GK: ";
	if (flagCk == true)
		cout << diemCk[index] << endl;
	else
		cout << "CHUA CO\n";
	cout << "=====================\n";
}

void xuatDsSv(const long mssv[], const string hoTen[], const double diemGk[], const double diemCk[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		xuat1Sv(mssv, hoTen, diemGk, diemCk, siSo, i);
	}
	cout << endl;
}

int timKiem(const long mssv[], const int siSo, const long id) {
	int res = -1;
	for (int i = 0; i < siSo; i++) {
		if (mssv[i] == id) {
			res = i;
			break;
		}
	}

	return res;
}

//Gia su trong danh sach khong co nguoi trung ten
int timKiem(const string hoTen[], const int siSo, const string name) {
	for (int i = 0; i < siSo; i++) {
		if (hoTen[i] == name) {
			return i;
		}
	}

	return -1;//Truong hop khong tim thay
}

//Nhap diem giua ky
void nhapDiem(const long mssv[], double diem[], const int siSo, string title = "") {
	for (int i = 0; i < siSo; i++) {
		cout << "Nhap diem " << title << " cho SV " << mssv[i] << ": ";
		cin >> diem[i];
	}
}

int findMin(const double diem[], const int siSo) {
	int minPos = 0;
	for (int i = 0; i < siSo; i++) {
		if (diem[i] < diem[minPos])
			minPos = i;
	}
	return minPos;
}

int findMax(const double diem[], const int siSo) {
	int maxPos = 0;
	for (int i = 0; i < siSo; i++) {
		if (diem[i] > diem[maxPos])
			maxPos = i;
	}
	return maxPos;
}

double calAverage(const double diem[], const int siSo) {
	double tong = 0;
	for (int i = 0; i < siSo; i++)
		tong += diem[i];
	return tong / siSo;
}

void xuatThongKe(const double diem[], const int siSo, string title = "") {
	int minPos = findMin(diem, siSo);
	int maxPos = findMax(diem, siSo);
	cout << "========THONG KE " << title << "=========\n";
	cout << "Diem nho nhat: " << diem[minPos] << endl;
	cout << "Diem lon nhat: " << diem[maxPos] << endl;
	cout << "Diem binh quan: " << calAverage(diem, siSo) << endl;
}

int main() {
	string hoTen[MAX];
	long mssv[MAX];
	double diemGk[MAX];
	double diemCk[MAX];
	int siSo;//So phan tu hien co trong mang

	nhapDsSv(mssv, hoTen, siSo);
	xuatDsSv(mssv, hoTen, diemGk, diemCk, siSo);

	cout << "============DIEM GIUA KY===========\n";
	nhapDiem(mssv, diemGk, siSo, "GIUA KY");
	flagGk = true;
	xuatDsSv(mssv, hoTen, diemGk, diemCk, siSo);
	xuatThongKe(diemGk, siSo, "GIUA KY");

	cout << "============DIEM CUOI KY===========\n";
	nhapDiem(mssv, diemCk, siSo, "CUOI KY");
	flagCk = true;
	xuatDsSv(mssv, hoTen, diemGk, diemCk, siSo);
	xuatThongKe(diemCk, siSo, "CUOI KY");

	////Thao tac tim kiem SV: MSSV: 2
	//long id;
	//cout << "Nhap MSSV can tim: ";
	//cin >> id;
	//int res = timKiem(mssv, siSo, id);//Index cua phan tu duoc tim thay trong mang

	//if (res != -1) {
	//	cout << "==============KQ TIM KIEM SV===========\n";
	//	xuat1Sv(mssv, hoTen, siSo, res);
	//}else
	//	cout << "Khong tim thay!\n";

	//string name;
	//cout << "Nhap Ho Ten can tim: ";
	//cin.ignore();
	//getline(cin, name);

	//int res2 = timKiem(hoTen, siSo, name);
	//if (res2 != -1) {
	//	cout << "==============KQ TIM KIEM SV===========\n";
	//	xuat1Sv(mssv, hoTen, siSo, res2);
	//}
	//else
	//	cout << "Khong tim thay!\n";
	return 1;
}