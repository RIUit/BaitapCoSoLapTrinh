#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int chon;
	do {
		cout << "=================MENU=================\n";
		cout << "1.DIEN TICH HINH VUONG\n";
		cout << "2.DIEN TICH HINH CHU NHAT\n";
		cout << "3.LUONG VE \n";
		cout << "4.DIEN TICH VA CHU VI HINH TRON\n";
		cout << "5.DIEN TICH HINH TAM GIAC\n";
		cout << "6.TONG SO CHU SO NGUYEN DUONG VA SO DAO NGUOC \n";
		cout << "7.KHOANG CACH TOA DO DIEM\n";
		cout << "8.GIA BAN CUA MAT HANG\n";
		cout << "9.TONG TRI GIA DON HANG CUA HIEU SACH ^LION^\n";
		cout << "10.MA ASCII \n";
		cout << "11.TINH GOC TOA DO\n";
		cout << "12.TINH DO DAI KY TU\n";
		cout << "13.TINH DAU HAY ROT\n";
		cout << "14.TINH SO LON NHAT\n";
		cout << "15.TRI TUYET DOI\n";
		cout << "16.SO SANH HAI SO NGUYEN\n";
		cout << "17.XEO LOAI HOC SINH\n";
		cout << "18.NAM NHUAN HAY NAM KHONG NHUAN\n";
		cout << "19.THANG NAM\n";
		cout << "20.MAY TINH MINI\n";
		cout << "21.MAY TINH MINI\n";
		cout << "20.Tong\n";
		cout << "0.Thoat \n";
		cout << "Nhap lua chon : ";
		cin >> chon;
		system("cls");
		switch (chon)
		{
		case 1: {
			double canh, dientich;
			do {
				cout << "Nhap canh hinh vuong : ";
				cin >> canh;
				if (canh <= 0)
					cout << "Nhap canh sai ! \n";
			} while (canh <= 0);
			dientich = canh * 4;

			cout << "Dien tich hinh vuong :" << dientich << endl;
		}break;
		case 2: {
			double a, b = 0, dientich;
			do {
				cout << "Nhap vao 2 canh hinh chu nhat : ";
				cin >> a >> b;
				if (a && b <= 0)
					cout << "Nhap canh sai ! \n";
			} while (a && b <= 0);

			dientich = a * b;

			cout << "Dien tich hinh chu nhat :" << dientich << endl;
		}break;
		case 3: {
			string ten;
			int ngaylam, tiencong, luong = 0;
			cout << "Nhap ten : ";
			//cin.ignore();
			getline(cin, ten);
			cout << "Nhap so ngay lam viec : tien cong 1 ngay : ";
			cin >> ngaylam;
			cout << "Nhap so tien cong 1 ngay : ";
			cin >> tiencong;

			luong = ngaylam * tiencong;

			cout << "Tien luong nhan duoc : " << ten << " tien luong cua ban : " << luong << endl;
			break;
		}
		case 4: {
			double r, dientich = 0, chuvi = 0;
			const double PI = 3.14;
			do {
				cout << "Nhap ban kinh hinh tron : ";
				cin >> r;
			} while (r <= 0);

			dientich = PI * pow(r, 2);
			chuvi = 2 * PI * r;

			cout << "Dien tich hinh tron :" << fixed << setprecision(2) << dientich << "Chu vi hinh tron :" << chuvi << endl;

		}break;
		case 5: {
			double a, b, c, p, dientich = 0;
			cout << "Nhap vao ba canh hinh tam giac : ";
			cin >> a >> b >> c;

			p = (a + b + c) / 2;
			dientich = sqrt(p * (p - a) * (p - b) * (p - c));

			cout << "Dien tich tam giac : " << dientich << endl;
		}break;
		case 6: {
			/*Vi?t ch??ng trình yêu c?u nh?p vào m?t s? nguyên d??ng g?m 3 ch? s?, sau ?ó in
			  ra t?ng c?a 3 ch? s? và s? ??o ng??c*/
			int n, tam, sdn = 0, tong = 0;
			do {
				cout << "Nhap vao so nguyen duong : ";
				cin >> n;
				if (n <= 0)
					cout << "Nhap sai gia tri!\n";
			} while (n <= 0);
			tam = n;
			while (tam != 0) {
				tong += tam % 10;
				sdn = sdn * 10 + tam % 10;
				tam /= 10;
			}

			cout << "Tong cac chu so cua so nguyen :" << tong << endl;
			cout << "So dao nguoc cua so nguyen :" << sdn << endl;

		}break;
		case 7: {
			double a1, a2, b1, b2, d;
			cout << "Nhap vao toa do diem thu nhat : ";
			cin >> a1 >> b1;
			cout << "Nhap vao toa do diem thu hai : ";
			cin >> a2 >> b2;
			d = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));
			cout << "Khoang cach giua 2 diem : " << d << endl;
		}break;
		case 8: {
			double giaban, giamua;
			const double ban = 0.6;
			do {
				cout << "Nhap gia mua vao cua mat hang : ";
				cin >> giamua;
				if (giamua <= 0)
					cout << "Nhap sai gia tri! \n";
			} while (giamua <= 0);
			giaban = giamua + giamua * ban;
			cout << "Gia ban cua mat hang : " << giaban << " VND" << endl;
		}break;
		case 9: {
			int tongtienmua, tongsach, tong = 0, thanhtien = 0;
			const double thue = 0.075;
			const int vanchuyen = 2000;
			cout << "Nhap tong tien mua sach : ";
			cin >> tongtienmua;
			cout << "Nhap tong sach mua : ";
			cin >> tongsach;
			thanhtien = tongtienmua + tongtienmua * thue + vanchuyen * tongsach;
			cout << "Tong tri gia don hang : " << thanhtien << endl;
		}break;
		case 10: {
			char kytu;
			cout << "Nhap vao mot ky tu : ";
			cin >> kytu;
			cout << "Ky tu co kieu so :" << (int)kytu << endl;
			int songuyen;
			cout << "Nhap vao mot so nguyen : ";
			cin >> songuyen;
			cout << "So nguyen co ky tu :" << (char)songuyen << endl;
		}break;
		case 11: {
			double goc = 0, radian;
			double x;
			const double PI = 3.14;
			cout << "Nhap vao mot goc : ";
			cin >> goc;
			radian = PI / 180;
			double hamsin = sin(goc) * radian;
			double hamcos = cos(goc) * radian;
			double hamtan = tan(goc) * radian;
			cout << "Ham sin :" << fixed << setprecision(2) << hamsin << " ham cos :" << hamcos << " ham tan :" << hamtan << endl;
		}break;
		case 12: {
			string s;
			cout << "Nhap vao chuoi bat ky : ";
			cin.ignore();
			getline(cin, s);
			cout << "Tong so ky tu:" << s.length() << endl;
		}break;
		case 13: {
			int c;
			double diem;
			do {
				cout << "Nhap diem trung binh: ";
				cin >> diem;
				if (diem >= 5)
					cout << "Dau" << endl;
				else
					cout << "Rot" << endl;
				cout << "Nhap tiep?(yes-1|np-0)\n";
				cin >> c;
			} while (c != 0);
		}break;
		case 14: {
			int a, b, c, max = -1;
			do {
				cout << "Nhap so nguyen duong a: ";
				cin >> a;
				cout << "Nhap so ngyen duong b: ";
				cin >> b;
				/*if (a > max) {
					max = a;
				}
				if (b > max){
					max = b;
				}
				cout << "So lon nhat : " << max << endl;*/
				max = a >= b ? a : b;
				cout << "So lon nhat : " << max << endl;
				cout << "Nhap tiep?(yes-1|np-0)\n";
				cin >> c;
			} while (c != 0);
		}break;
		case 15: {
			int n, tuyetdoi = 0;
			cout << "Nhap so nguyen duong : ";
			cin >> n;
			tuyetdoi = abs(n);
			cout << "Tri tuye doi cua " << n << " : " << tuyetdoi << endl;
		}break;
		case 16: {
			int a, b, c, max = -1;
			do {
				cout << "Nhap so nguyen duong a: ";
				cin >> a;
				cout << "Nhap so ngyen duong b: ";
				cin >> b;
				max = a >= b ? a : b;
				if (a > b)
					cout << "So " << a << " lon hon" << b << endl;
				else if (a = b)
					cout << "So a va b bang nhau " << endl;
				else
					cout << "So " << a << " nho hon" << b << endl;
				cout << "Nhap tiep?(yes-1|np-0)\n";
				cin >> c;
			} while (c != 0);
		}
		case 17: {
			int diem, c;
			do {
				cout << "Nhap diem tich luy: ";
				cin >> diem;

				if (diem >= 9)
					cout << "Xep loai Suat xac \n";
				else if (diem >= 8)
					cout << "Xep loai Gioi \n";
				else if (diem >= 7)
					cout << "Xep loai Kha \n";
				else if (diem >= 6)
					cout << "Xep loai Trung binh kha\n";
				else if (diem >= 5)
					cout << "Xep loai Trung binh \n";
				else
					cout << "Xep loai Yeu \n";
				cout << "Nhap tiep ?(yes-1|no-0)";
				cin >> c;
			} while (c != 0);
		}break;
		case 18: {
			int nam, c;
			do {
				do {
					cout << "Nhap nam : ";
					cin >> nam;
					if (nam <= 0)
						cout << "Nhap sai nam bi am! \n";
				} while (nam <= 0);
				if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
					cout << "Nam " << nam << " la nam thuan co 366 ngay \n";
				else
					cout << "Nam " << nam << " khong phai nam nhuan \n";
				cout << "Nhap tiep ?(yes-1|no-0)";
				cin >> c;
			} while (c != 0);
		}break;
		case 19: {
			int thang, nam;
			cout << "Nhap vao thang: \n";
			cin >> thang;
			cout << "Nhap vao nam: \n";
			cin >> nam;
			switch (thang)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				cout << "So ngay cua thang co: 31 ngay\n";
				break;
			case 4:case 6:case 9:case 11:
				cout << "So ngay cua thang co:30 ngay\n";
				break;
			case 2:
				if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
					cout << "Thang co 29 ngay!\n";
				else
					cout << "Thang co 28 ngay!\n";
				break;
			default:
				break;
			}
		}break;
		case 20: {
			//Vi?t ch??ng trình có ch?c n?ng nh? máy tính c?m tay (s? d?ng switch)
			double a, b, kqua;
			char ptinh;
			cout << "Nhap vao so nguyen a va b\n ";
			cin >> a >> b;
			cout << "Nhap toan tu : ";
			cin >> ptinh;

			switch (ptinh)
			{
			case('+'):
				kqua = a + b;
				cout << "Ket qua phep cong la: " << kqua << endl;
				break;
			case('-'):
				kqua = a - b;
				cout << "Ket qua phep tru la: " << kqua << endl;
				break;
			case('*'):
				kqua = a * b;
				cout << "Ket qua phep nhan la: " << kqua << endl;
				break;
			case('/'):
				kqua = a / b;
				cout << "Ket qua phep nhan la: " << kqua << endl;
				break;

			default:
				cout << "ngoai pham vi\n";
				break;
			}
		}break;
		case 21: {
			int a, b, c;
			cout << "Nhap vao ba so nguyen :\n ";
			cin >> a >> b >> c;
			if (a > b) {
				a = b;
				b = a;
			}
			if (a > c) {
				a = c;
				c = a;
			}
			if (b > c) {
				b = c;
				c = b;
			}
			cout << "So nguyen tang dan :" << a << b << c << endl;
		}break;
		case 22: {
			int x, tong = 0, c;
			do {
				cout << "Nhap vao so: ";
				cin >> x;
				tong += x;

				cout << "Nhap tiep ?(yes-1|no-0)";
				cin >> c;

			} while (c != 0);

			cout << tong << endl;

		}break;
		default:
			cout << "Cam on da dung ! \n";
			break;
		}
	} while (chon != 0);



}