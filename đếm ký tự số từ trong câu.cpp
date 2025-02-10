/*Viết chương trình C++ để nhập một câu, đếm số từ và ký tự trong câu đó,
và in kết quả ra màn hình.*/
#include <iostream>
#include<conio.h>
#include <string>
using namespace std;


int main() {
	string cau;
	int demtu=0, demkytu = 0;
	char ch =' ';
	cout << "Nhap vao mot cau :";
	getline(cin, cau);
	if (ch == ' ') {
		demtu++;
	}
	else{
		demkytu++;
    }
	cout <<"So ky tu co trong cau : " << cau.length() << endl;
	cout <<"So ky tu co trong cau : " << cau.length() << endl;

	system("pause");
	return 0;
}