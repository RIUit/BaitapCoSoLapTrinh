#include<iostream>
using namespace std;


                   //tim max min bang while
const int MANG = 100;
int main() {
	int a[100];
	int n;

	cout << "Nhap so phan tu : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int i = 0;
	int min = a[0];
	int max = a[0];
	while(i<n) {
		
		if (min > a[i]) {
			min = a[i ];
		}
		if (max < a[i]) {
			max = a[i];
			
		}
		i++;
	}
	cout << max << " " << min << endl;

	system("pause");
	return 0;
}