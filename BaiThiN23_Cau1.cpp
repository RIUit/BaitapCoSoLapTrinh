//Cau 1 De thi cuoi ky nam 2023
#include<iostream>
#include<iomanip>
using namespace std;


//C1a: Ham S(n):tinh gia tri so thuc S(n) = 1/3 + 1/7 + ... + 1/(2n + 1)
double daThucS(int n) {
	double tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += 1 / ((2.0 * i*1.0) + 1);
	}
	cout << "S(n) = " << setprecision(4) << tong << fixed << endl;
	return tong;
}
//C1b: Ham C(n): nhap n =>chu so nho nhat
int findChuSoNhoNhat(int n) {//34667
	int tam = n;
	int minPos = INT16_MAX;
	while (tam != 0) {
		int chuSo = tam % 10;
		if (chuSo < minPos) {
			minPos =chuSo;
		}
		tam = tam / 10;
	}
	cout << "Chu so nho nhat trong so nguyen " << n << " : " << minPos << endl;
	return minPos;
} 
int main() {
	int n;
	int chon; 
	do
	{
	cout << "====================MENU====================\n";
	cout << "1.Tim chu so nho nhat trong so nguyen\n";
	cout << "2.Tinh S(n) = 1/3 + 1/7 + ... + 1/(2n + 1)\n";
	cout << "=============================================\n";
	cout << "Nhap lua chon : ";
	cin >> chon;
	system("cls");
	switch (chon)
	{
	case 1: {
		cout << "Tim chu so nho nhat trong so nguyen\n";
		char c;
		do{
		//Ktr dieu kien so nguyen n phai duong
		do {
			cout << "Nhap so nguyen duong n : ";
			cin >> n;
			if (n < 0) {
				cout << "Nhap sai gia tri duong n>0 ! \n";
			}
		} while (n < 0);
		//n => chu so nho nhat
		findChuSoNhoNhat(n);

		//Hoi nguoi nhap 
		cout << "Nhap tiep Khong (Y=Yes|N=No)";
		cin >> c;

		} while (c == 'Y' || c == 'y');
		
	}break;
	case 2: {
		cout << "Tinh S(n) = 1/3 + 1/7 + ... + 1/(2n + 1)\n";
		char c;
		do {
			//Ktr dieu kien so nguyen n phai duong
			do {
				cout << "Nhap so nguyen duong n : ";
				cin >> n;
				if (n < 0) {
					cout << "Nhap sai gia tri duong n>0 ! \n";
				}
			} while (n < 0);

			//Output:S(n)
			daThucS(n);

			//Hoi nguoi nhap co muon nhap tiep khong?
			cout << "Nhap tiep khong ? (Y=Yes|N=No) ";
			cin >> c;


		} while (c == 'Y' || c == 'y');
	}break;

	default:
		cout << "Chuc nang chua phat chuyen !\n";
		break;
	}

	} while (chon != 0);
	system("pause");
	return 0;
}