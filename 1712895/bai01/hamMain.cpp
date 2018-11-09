#include"QuanLiSinhVien.h"
#include<iostream>
#include<list>
#include<string>
#include<Windows.h>
#include<conio.h>
using namespace std;
void nhapThongTinSinhVien(ketQua **a, int n, int &m)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << "nhap so mon hoc hoac hoc phan cua Sinh Vien:"<<i+1<<":";
		cin >> m;
		a[i] = new ketQua[m];
		cout << "sinh vien thu " << i + 1 << endl;
		cin.ignore();
		a[i][0].nhapSinhVien();
		a[i][0].nhapKhoa();
		for (int j = 0; j < m ; j++)
		{
			cout << "mon hoc thu " << j+1 << endl;
			cin.ignore();
			a[i][j].nhapMonHoc();
			cin.ignore();
			a[i][j].nhapHocPhan();
			a[i][j].nhapDiem();
		}
	}
}
void xuatThongTinSinhVien(ketQua **a,int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "sinh vien thu " << i + 1 << endl;
			a[i][0].xuatSinhVien();
			a[i][0].xuatKhoa();
			for (int j = 0; j < m ; j++)
			{
				cout << "mon hoc thu " << j+1 << endl;
				a[i][j].xuatMonHoc();
				cout << "hoc phan thu " << j+1 << endl;
				a[i][j].xuatHocPhan();
				a[i][j].xuatDiem();
			}
	}
}
void xoaThongTinSinhVien(ketQua **a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete[]a;
}

void timKiemMaSinhVien(ketQua **a, int n, int m)
{
	string b;
	int dem = 0;
	cout << "nhap ma sinh vien ban muon tim kiem :";
	cin.ignore();
	getline(cin, b);
	for (int i = 0; i < n; i++)
	{
		if (b.compare(a[i][0].getMaSinhVien()) == 0)
		{
			a[i][0].xuatSinhVien();
			a[i][0].xuatKhoa();
			for (int j = 0; j < m; j++)
			{
				a[i][j].xuatMonHoc();
				a[i][j].xuatHocPhan();
				a[i][j].xuatDiem();
			}
			dem++;
		}
	}
	if (dem == 0) {
		cout << "khong tim thay sinh vien ban muon tim";
	}
}
double tinhTong(ketQua **a, int n, int m)
{
	double diem = 0;
	double *b=new double [m];
	for (int i = 0; i < m; i++)
	{
		b[i] = a[n][i].getDiem();
	}
	for (int i = 0; i < m; i++)
	{
		diem = diem +b[i];
	}
	delete[]b;
	return diem;
}
void muoiSinhVien(ketQua **a, int n, int m)
{
	int dem = 0;
	int nam;
	string *maSV= new string [n];
	double *tongDiem = new double[n];
	for (int i = 0; i < n; i++)
	{
		maSV[i] = a[i][0].getMaSinhVien();
		tongDiem[i] = tinhTong(a, i, m);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (tongDiem[i]< tongDiem[j])
			{
				swap(maSV[i], maSV[j]);
				swap(tongDiem[i], tongDiem[j]);
			}
		}
	}
	
	cout << "nhap nam ban muon xuat SV:";
	cin >> nam;
	for (int i = 0; i < n; i++)
	{
		if(dem<10)
		for (int j = 0; j < n; j++)
			{
				if (maSV[i] == a[j][0].getMaSinhVien() && nam == a[j][0].getNamSV())
				{
					cout << "ten Sinh vien:";
					cout << a[j][0].getTenSinhVien()<<endl;
					cout << "ma Sinh Vien:";
					cout << a[j][0].getMaSinhVien()<<endl;
					cout << "tong diem:";
					cout << tinhTong(a, j, m)<<endl;
					dem++;
				}
			}
	
	}
	delete[]maSV;
	delete[]tongDiem;
}


void main()
{
	ketQua **a;
	int n=0, m;
	int nhap;
	while (1)
	{
		cout << "0.xoa thong tin va thoat"<<endl;
		cout << "1.nhap thong tin sinh vien" << endl;
		cout << "2.xuat thong tin sinh vien:" << endl;
		cout << "3.tim kiem thong tin sinh vien:" << endl;
		cout << "4. xuat 10 sinh vien gioi nhat theo nam:" << endl;
		cout << "nhap lua chon cua ban:";
		cin >> nhap;
		system("cls");
		if (nhap == 1)
		{
			cout << "nhap so sinh vien:";
			cin >> n;
			a = new ketQua*[n];
			nhapThongTinSinhVien(a, n, m);
			system("cls");
		}
		if (nhap == 2)
		{
			if (n == 0) {
				cout << "chua co thong tin SV" << endl;
				_getch();
				system("cls");
			continue;
			}
			else
			{
				xuatThongTinSinhVien(a, n, m);
				_getch();
				system("cls");
			}
		}
		if (nhap == 3)
		{
			if (n == 0) {
				cout << "chua co thong tin SV" << endl;
				_getch();
				system("cls");
				
				continue;
			}
			else
			{
				timKiemMaSinhVien(a, n, m);
				_getch();
				system("cls");
			}
		}
		if (nhap == 4)
		{
			if (n == 0) {
				cout << "chua co thong tin SV" << endl;
				_getch();
				system("cls");
				continue;
			}
			else
			{
				muoiSinhVien(a, n, m);
				_getch();
				system("cls");
			}
		}
		if (nhap == 0)
		{
			xoaThongTinSinhVien(a, n, m);
			exit(0);
		}
	}
}
