/*Nhập n =150
1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,111,121,131,141   */
#include <iostream>
using namespace std;


int main() {
	int n,c;
	do{
		system("cls");
	do{
	cout << "Nhap so nguyen : ";
	cin >> n;
	} while (n < 0);

	for (int i = 1; i <= n; i++) {
		int tam = i, sdn = 0;
		while (tam > 0) {
			sdn = sdn * 10 + tam % 10;
			tam /= 10;
		}
		if (sdn == i) {
			cout << sdn << ",";
		}
	}
	cout << "Nhap tiep khong?(yes-1|no-0)";
	cin >> c;
	} while (c != 0);
	system("pause");
	return 0;
}
