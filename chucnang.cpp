#include<bits/stdc++.h>
#include"dlist.cpp"
#include"node.cpp"
#include"sinhvien.cpp"
#ifndef __chucnang__cpp__
#define __chucnang__cpp__
using namespace std;
class chucnang
{
	private:
		dlist<sinhvien> L;
	public:
		void taodanhsach()
		{
			sinhvien sv;
			while(cin>>sv&&sv.docmssv()>0){
				L.push_back(sv);
			}
		}
		void themsinhvien()
		{
			sinhvien sv;
			if(L.size()==0)
			{
				cout<<"Nhap thong tin sinh vien can them"<<endl;
				cin>>sv;
				L.push_back(sv);
			}
			else
			{
				int k;
				cout<<"Nhap vi tri can them: ";
				do
				{
					cin>>k;
					if(k<=0||k>L.size())
						cout<<"Vi tri can them khong hop le! Vui long nhap lai: ";
				}
				while(k<=0||k>L.size());
				dlist<sinhvien>::iterator x=L.begin();
				for(int i=1;i<k;++i)
				{
					++x;
				}
				cout<<"Nhap thong tin sinh vien can them"<<endl;
				cin>>sv;
				L.insert(x,sv);
			}

		}
		void xuatdanhsach()
		{
			sinhvien sv;
			if(L.size()==0){
				cout<<"Khong ton tai sinh vien trong danh sach"<<endl;
			}
			else
			{	
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					for(dlist<sinhvien>::iterator y=x.getcurr()->getnext();y!=L.end();++y){
						if((*x).docdiem()<(*y).docdiem()){
						sinhvien temp = (*x);
						(*x) = (*y);
						(*y) = temp;
						}
					}	
				}		
				cout<<"||"<<setw(15)<<left<<"Ma so sinh vien";
				cout<<"||"<<setw(30)<<left<<"Ho va ten";
				cout<<"||"<<setw(15)<<left<<"Lop";
				cout<<"||"<<setw(15)<<left<<"Diem trung binh"<<"||"<<endl;
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x){
					cout<<*x<<endl;
				}	
			}	
		}
		void xuatdsgioi()
		{
			sinhvien sv;
			int dem=0;
			for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
			{
				if((*x).docdiem()>=8)
					++dem;
			}
			if(dem==0)
				cout<<"Khong co sinh vien doat loai gioi"<<endl;
			else
			{
				cout<<"Co "<<dem<<" sinh vien dat loai gioi";
				cout<<endl<<"||"<<setw(15)<<left<<"Ma so sinh vien";
				cout<<"||"<<setw(30)<<left<<"Ho va ten";
				cout<<"||"<<setw(15)<<left<<"Lop";
				cout<<"||"<<setw(15)<<left<<"Diem trung binh"<<"||"<<endl;
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					if((*x).docdiem()>=8)
						cout<<*x<<endl;
				}	
			}
		}
		void xuatdslop()
		{
			sinhvien sv;
			int dem=0;
			string lopx;
			cout<<"Nhap ten lop: ";
			fflush(stdin);
			getline(cin,lopx);
				
			for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
			{
				if((*x).doclop()==lopx){
					++dem;	
				}
			}
			if(dem==0)
				cout<<"Khong co sinh vien thuoc lop "<<lopx<<endl;
			else
			{
				cout<<"Co "<<dem<<" sinh vien thuoc lop "<<lopx;
				cout<<endl<<"||"<<setw(15)<<left<<"Ma so sinh vien";
				cout<<"||"<<setw(30)<<left<<"Ho va ten";
				cout<<"||"<<setw(15)<<left<<"Lop";
				cout<<"||"<<setw(15)<<left<<"Diem trung binh"<<"||"<<endl;
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					if((*x).doclop()==lopx){
						cout<<*x<<endl;	
					}
				}	
			}	

		}
		void xuatvt()
		{
			sinhvien sv;
			int mssv_x;
			bool kt=false;
			cout<<"Nhap ma so sinh vien: ";
			cin>>mssv_x;
			for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
			{
				if(mssv_x==(*x).docmssv())
					kt=true;
			}
			if(kt)
			{
				cout<<"Vi tri cua sinh vien co ma so sinh vien "<<mssv_x<<" trong danh sach: ";
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					if(mssv_x==(*x).docmssv())
						cout<<L.getindex(x)+1<<" ";
				}
			}	
			else
				cout<<"Khong ton tai sinh vien co ma so "<<mssv_x<<" trong danh sach";

		}
		void sapxepten()
		{
			if(L.size()==0)
				cout<<"Khong ton tai sinh vien trong danh sach"<<endl;
			else
			{
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					string str_x=(*x).docht();
					for(dlist<sinhvien>::iterator y=x.getcurr()->getnext();y!=L.end();++y){
						string str_y=(*y).docht();
						if(str_x.compare(str_y)>0){
						sinhvien temp = (*x);
						(*x) = (*y);
						(*y) = temp;
						}
					}	
				}	
				cout<<"||"<<setw(15)<<left<<"Ma so sinh vien";
				cout<<"||"<<setw(30)<<left<<"Ho va ten";
				cout<<"||"<<setw(15)<<left<<"Lop";
				cout<<"||"<<setw(15)<<left<<"Diem trung binh"<<"||"<<endl;
				for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
				{
					cout<<*x<<endl;
				}		
			}		
		}
		void xoadanhsach()
		{
			for(dlist<sinhvien>::iterator x=L.begin();x!=L.end();++x)
			{
				if((*x).docdiem()<5)
					L.erase(x);	
			}	
		}
		void nhanphimbatky()
		{	
			cout<<endl;
			system("pause");
			system("cls");
		}	
};
#endif
