#include"QuanLiSinhVien.h"
#include<iostream>
#include<string>
using namespace std;
string khoa::getTenKhoa()
{
	return tenKhoa;
}
int khoa::getNamThanhLap()
{
	return namThanhLap;
}
string khoa::getMaKhoa()
{
	return maKhoa;
}
void khoa::setTenKhoa(string a)
{
	tenKhoa = a;
}
void khoa::setNamThanhLap(int a)
{
	namThanhLap = a;
}
void khoa::setMaKhoa(string a)
{
	maKhoa = a;
}
void khoa::nhapKhoa()
{
	int b;
	string a;
	
	cout << "nhap ma khoa:";
	cin.ignore();
	getline(cin, a);
	setMaKhoa(a);
	cout << "nhap ten khoa :";
	getline(cin, a);
	setTenKhoa(a);
	cout << "nhap nam thanh lap:";
	cin >> b;
	setNamThanhLap(b);
	
}
void khoa::xuatKhoa()
{
	
	cout << "ma khoa :";
	cout << getMaKhoa()<<endl;
    cout << "ten khoa :";
	cout << getTenKhoa() << endl;
    cout << "nam thanh lap :";
	cout << getNamThanhLap() << endl;
}
string monHoc::getTenMonHoc()
{
	return tenMonHoc;
}
int monHoc::getTinChi()
{
	return tinChi;
}
string monHoc::getMaMonHoc()
{
	return maMonHoc;
}
void monHoc::setTenMonHoc(string a)
{
	tenMonHoc = a;
}
void monHoc::setTinChi(int a)
{
	tinChi= a;
}
void monHoc::setMaMonHoc(string a)
{
	maMonHoc = a;
}
void monHoc::nhapMonHoc()
{
	int b;
	string a;
	cout << "ma mon hoc:";
	getline(cin, a);
	setMaMonHoc(a);
	cout << "ten mon hoc: ";
	getline(cin, a);
	setTenMonHoc(a);
	cout << "so tin chi:";
	cin >> b;
	setTinChi(b);
	
}
void monHoc::xuatMonHoc()
{
	cout << "ma mon hoc:";
	cout << getMaMonHoc() << endl;
	cout << "ten mon hoc";
	cout << getTenMonHoc() << endl;
	cout << "so tin chi :";
	cout << getTinChi()<<endl;
}
string sinhVien::getMaSinhVien()
{
	return maSinhVien;
}
string sinhVien::getTenSinhVien()
{
	return tenSinhVien;
}
int sinhVien::getNamSV()
{
	return nam;
}
void sinhVien::setMaSinhVien(string a)
{
	maSinhVien = a;
}
void sinhVien::setTenSinhVien(string a)
{
	tenSinhVien = a;
}
void sinhVien::setNam(int a)
{
	nam = a;
}
void sinhVien::nhapSinhVien()
{
	string a;
	int b;
	cout << "nhap ma sinh vien:";
	getline(cin, a);
	setMaSinhVien(a);
	cout << "nhap ten sinh vien:";
	getline(cin, a);
	setTenSinhVien(a);
	cout << "nhap nam:";
	cin >> b;
	setNam(b);
	cin.ignore();
}
void sinhVien::xuatSinhVien()
{
	cout << "ma sinh vien:";
	cout << getMaSinhVien() << endl;
	cout << "ten sinh vien:";
	cout << getTenSinhVien() << endl;
	cout << "nam nhap hoc:";
	cout << getNamSV() << endl;
}
string hocPhan::getMaHocPhan()
{
	return maHocPhan;
}
int hocPhan::getHocKy()
{
	return hocKy;
}
int hocPhan::getNam()
{
	return Nam;
}
string hocPhan::getGiaoVien()
{
	return giaoVien;
}
void hocPhan::setMaHocPhan(string a)
{
	maHocPhan = a;
}
void hocPhan::setHocKy(int a)
{
	hocKy = a;
}
void hocPhan::setNam(int a)
{
	Nam = a;
}
void hocPhan::setGiaoVien(string a)
{
	giaoVien = a;
}
void hocPhan::nhapHocPhan()
{
	int b;
	string a;
	cout << "nhap ma hoc phan :";
	getline(cin, a);
	setMaHocPhan(a);
	cout << "nhap hoc ky:";
	cin >> b;
	setHocKy(b);
	cout << "nhap nam:";
	cin >> b;
	setNam(b);
	cin.ignore();
	cout << "nhap giao vien:";
	getline(cin, a); 
	setGiaoVien(a);
}
void hocPhan::xuatHocPhan()
{
	cout << "ma hoc phan:";
	cout << getMaHocPhan() << endl;
	cout << "hoc ky:";
	cout << getHocKy() << endl;
	cout << "nam :";
	cout << getNam() << endl;
	cout << "giao vien:";
	cout << getGiaoVien() << endl;
}
double ketQua::getDiem()
{
	return diem;
}
void ketQua::setDiem(double a)
{
	diem = a;
}
void ketQua::nhapDiem()
{
	double a;
	cout << "nhap diem:";
	cin >> a;
	setDiem(a);
}
void ketQua::xuatDiem()
{
	cout << "diem :";
	cout << getDiem()<<endl;
}
void duKien::setMaMonHocTruoc(string a)
{
	maMonHocTruoc = a;
}
string duKien::getMaMonHocTruoc()
{
	return maMonHocTruoc;
}
void duKien::nhapMaMonHocTruoc()
{
	string a;
	cout << "ma mon hoc truoc:";
	getline(cin, a);
	setMaMonHocTruoc(a);
}
void duKien::xuatMaMonHocTruoc()
{
	cout << "ma mon hoc truoc:";
	cout << getMaMonHocTruoc() << endl;
}
