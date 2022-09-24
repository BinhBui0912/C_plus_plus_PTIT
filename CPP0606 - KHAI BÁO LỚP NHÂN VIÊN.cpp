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

class NhanVien{
	private:
		string mnv;
		string ten;
		string gt;
		string ns;
		string dc;
		string mst;
		string nk;
	public:
		NhanVien();
		void nhap();
		void xuat();
};

NhanVien::NhanVien(){
	this->mnv = "00001";
	this->dc = this->gt = this->mst = this->ten = this->nk = this->ns = "";
}

void NhanVien::nhap(){
	getline(cin, ten);
	cin >> gt;
	cin >> ns; cin.ignore();
	getline(cin, dc);
	cin >> mst;
	cin >> nk;
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3, "0");
	if(nk[1] == '/') nk = "0" + nk;
	if(nk[4] == '/') nk.insert(3, "0");
}

void NhanVien::xuat(){
	cout << mnv <<  " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << nk;
}

int main(){
	NhanVien a;
	a.nhap();
	a.xuat();
	return 0;
}
