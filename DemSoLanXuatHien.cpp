//Đếm số lần xuất hiện chuỗi
#include<iostream>
#include<string>
using namespace std;

int demSoLanXuatHien(string chuoi, char kytu) {
	int dem = 0;
	for (int i = 0; i < chuoi.length(); i++) {
		if (chuoi[i] == kytu || (char)(chuoi[i]) == (char)(kytu - 32)) {
			dem++;
		}
	}
	cout << "So ky tu " << kytu << " : " << dem << endl;

return dem;
}
int demSoLanXuatHien(string chuoi, char kytu) {
	int i = 0;
	int dem = 0;
	while (i<chuoi.length()) {
		if (chuoi[i] == kytu || (char)(chuoi[i]) == (char)(kytu - 32)) {
			dem++;
		}
		i++;
	}
	cout << "So ky tu " << kytu << " : " << dem << endl;
	return dem;
}
int main() {
	string chuoi;
	char kytu;
	int dem = 0;
	cout << "Nhap vao ky tu : ";
	getline(cin, chuoi);
	cout << "Nhap ky tu can tim : ";
	cin >> kytu;
	demSoLanXuatHien(chuoi, kytu);

	


	system("pause");
	return 0;
}