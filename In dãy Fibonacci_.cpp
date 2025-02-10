#include <iostream>
using namespace std;


int main() {
	int a=0, b=1, n,tong=0;
	cout << "Nhap so nguyen : ";
	cin >> n;
	cout << a << " ";
	cout << b << " ";
	for (int i = 1; i < n; i++) {
		
		tong = a + b; //0+1
		if(tong<n){
		cout << tong << " ";    //1
        }
		a = b;//a=1
		b = tong;//b=1
		
	}
	


	system("pause");
	return 0;
}