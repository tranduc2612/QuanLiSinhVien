#include<bits/stdc++.h>
#include"sinhvien.cpp"
#include"chucnang.cpp"
using namespace std;
int main()
{
	chucnang x;
	int chon;
	luachon:cout<<"Chuong trinh quan ly danh sach sinh vien bang danh sach lien ket kep"<<endl;
	cout<<endl<<"1. Tao danh sach sinh vien";
	cout<<endl<<"2. Them mot sinh vien vao danh sach";
	cout<<endl<<"3. Liet ke danh sach sinh vien theo thu tu giam dan cua diem";
	cout<<endl<<"4. Liet ke tat ca cac sinh vien doat loat gioi (co DTB >= 8.0)";
	cout<<endl<<"5. In danh sach sinh vien theo ten lop tuy chon";
	cout<<endl<<"6. In vi tri cua sinh vien theo ma so sinh vien tuy chon";
	cout<<endl<<"7. Sap xep danh sach sinh vien theo thu tu tang dan cua ten";
	cout<<endl<<"8. Xoa toan bo danh sach sinh vien co DTB < 5.0";
	cout<<endl<<"9. Thoat"<<endl;
	cout<<endl<<"Moi ban chon chuc nang: ";
	chon:cin>>chon;
	switch(chon)
	{
		case 1:
			system("cls");
			x.taodanhsach();
			cout<<endl<<"Ban da tao thanh cong danh sach sinh vien!";
			x.nhanphimbatky();
			goto luachon;
			break;
		case 2:
			system("cls");
			x.themsinhvien();
			cout<<endl<<"Ban da them thanh cong sinh vien vao danh sach!";
			x.nhanphimbatky();
			goto luachon;
			break;
		case 3:
			system("cls");
			x.xuatdanhsach();
			x.nhanphimbatky();
			goto luachon;
			break;
		case 4:
			system("cls");
			x.xuatdsgioi();
			x.nhanphimbatky();
			goto luachon;
			break;
		case 5:
			system("cls");
			x.xuatdslop();
			x.nhanphimbatky();
			goto luachon;
			break;
		case 6:
			system("cls");
			x.xuatvt();
			cout<<endl;
			x.nhanphimbatky();
			goto luachon;
			break;
		case 7:
			system("cls");
			x.sapxepten();
			x.nhanphimbatky();
			goto luachon;
			break;
		case 8:
			system("cls");
			x.xoadanhsach();
			cout<<"Ban da xoa sinh vien thanh cong!"<<endl;
			x.nhanphimbatky();
			goto luachon;
			break;						
  		case 9:
  			system("cls");
			cout<<"Da thoat chuong trinh";
			return 0;
			break;
		default:
			cout<<"Vui long chon lai chuc nang: ";
			goto chon;
			break;		
	}
}
