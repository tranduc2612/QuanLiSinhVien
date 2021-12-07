#include<bits/stdc++.h>
#ifndef __sinhvien__cpp__
#define __sinhvien__cpp__
using namespace std;
class sinhvien
{
	private:
		int mssv;
		string hoten,lop;
		float dtb;
	public:
		sinhvien()
		{
			mssv=0;
			hoten="";
			lop="";
			dtb=0;
		}
		friend istream &operator>>(istream &is,sinhvien &sv)
		{	
			cout<<"Nhap ma so sinh vien: ";
			is>>sv.mssv;
			fflush(stdin);
			cout<<"Nhap ho va ten: ";
			fflush(stdin);
			getline(is,sv.hoten);
			cout<<"Nhap ten lop: ";
			getline(is,sv.lop);
			cout<<"Nhap diem trung binh: ";
			is>>sv.dtb;
			cout<<"\n";
			return is;	
		}
		friend ostream &operator<<(ostream &os,sinhvien sv)
		{
			os<<"||"<<setw(15)<<sv.mssv;
			os<<"||"<<setw(30)<<sv.hoten;
			os<<"||"<<setw(15)<<sv.lop;
			os<<"||"<<setw(15)<<sv.dtb<<"||";	
			return os;
		}
		int docmssv()
		{
			return mssv;	
		}
		float docdiem()
		{
			return dtb;
		}
		string doclop()
		{
			return lop;
		}
		string docht()
		{
			return hoten;
		}
};
#endif
