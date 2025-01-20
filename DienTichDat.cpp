#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int s, r, d;
	int doLech = 0;
	int d_Min = 0, r_Min = 0;
	cout << "1.Phuong an uu tien nhat\n";
	cout << "  Nhap dien tich manh dat : ";
	cin >> s;      
	int doLechMin = s;
	for (int r = 1; r <= ceil(sqrt(s)); r++) {//1<3
		d = s / r;//d=6  d=6/2=3   d=6/3=2
		doLech = abs(d - r);//dolech=6-1=5  dolech=3-2=1
		
		if (d * r == s&&doLech<doLechMin) {//6*1=6 && 5<6   3*2=6 && 1<5
			d_Min = d;//6      d_M=3
			r_Min = r;//1      r_M=2
			doLechMin = doLech;//5  dolechMin=1
		}
		
	}
	cout << "Chieu dai : " << d_Min << " Chieu rong : " << r_Min << endl;

	cout << "2.Phuong an thay the \n";
	for (int i = 1; i <= sqrt(s); i++ ) {
		int tam = ceil(s / i);
		if (i * tam == s) {
			if (tam > i) {
				d = tam;
				r = i;
				
			}
			else if (tam < i) {
				d = i;
				r = tam;
				
			}
			cout << "Dai : " << d << " Rong : " << r << endl;
		}
		
	}

	system("pause");
	return 0;
}