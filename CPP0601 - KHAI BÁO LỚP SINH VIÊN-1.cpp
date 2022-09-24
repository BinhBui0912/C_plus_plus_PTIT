//cac dieu can ghi nho trong string
//length() va size()
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach

#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string msv, ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();
};

SinhVien::SinhVien(){
	this->gpa = 0;
	this->msv = "B20DCCN001";
	this->ten = this->ns = this->lop = "";
}

void SinhVien::nhap(){
	getline(cin,ten);
	cin >> lop;
	cin >> ns;
	cin >> gpa;
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3,"0");
}

void SinhVien::xuat(){
	cout << msv << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
