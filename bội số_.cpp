/*Viết chương trình C++ để nhập nhập một số nguyên,
tìm bội số của số đó với các số từ 1-15 , sau đó in kết quả ra màn hình.*/
#include <iostream>
using namespace std;


int main() {
	int n;

	do{
	cout << "Nhap so nguyen : ";//vd:12/3=4  12 la boi so of 3
	cin >> n;
	} while (n < 0);

	cout << "Boi so cua so " << n << " la :";

	for (int i = 1; i < 16; i++) {
		cout << "\n" << n << "x" << i << "=" << n * i;


	}
	


	system("pause");
	return 0;
}