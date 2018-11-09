#pragma once
#ifndef _QuanLiSinhVien
#define _QuanLiSinhVien
#include<string>
using namespace std;
class khoa
{
private:
	string tenKhoa;
	int namThanhLap;
protected:
	string maKhoa;
public:
	string getTenKhoa();
	int getNamThanhLap();
	string getMaKhoa();
	void setTenKhoa(string a);
	void setNamThanhLap(int a);
	void setMaKhoa(string a);
	void nhapKhoa();
	void xuatKhoa();
};
class monHoc: public virtual khoa
{
private: 
	string tenMonHoc;
	int tinChi;
protected:
	string maMonHoc;
public:
	string getTenMonHoc();
	int getTinChi();
	string getMaMonHoc();
	void setTenMonHoc(string a);
	void setTinChi(int a);
	void setMaMonHoc(string a);
	void nhapMonHoc();
	void xuatMonHoc();
};
class sinhVien: public virtual khoa 
{
protected:
	string maSinhVien;
private:
	string tenSinhVien;
	int nam;
public:
	string getMaSinhVien();
	string getTenSinhVien();
	int getNamSV();
	void setMaSinhVien(string a);
	void setTenSinhVien(string a);
	void setNam(int a);
	void nhapSinhVien();
	void xuatSinhVien();



};
class hocPhan :public monHoc
{
protected:
	string maHocPhan;
private:
	int hocKy;
	int Nam;
	string giaoVien;
public:
	string getMaHocPhan();
	int getHocKy();
	int getNam();
	string getGiaoVien();
	void setMaHocPhan(string a);
	void setHocKy(int a);
	void setNam(int a);
	void setGiaoVien(string a);
	void nhapHocPhan();
	void xuatHocPhan();
};
class ketQua : public hocPhan, public sinhVien
{
private:
	double diem;
public:
	double getDiem();
	void setDiem(double a);
	void nhapDiem();
	void xuatDiem();
	
};
class duKien : public monHoc
{
protected:
	string maMonHocTruoc;
public:
	void setMaMonHocTruoc(string a);
	string getMaMonHocTruoc();
	void nhapMaMonHocTruoc();
	void xuatMaMonHocTruoc();
};
#endif 