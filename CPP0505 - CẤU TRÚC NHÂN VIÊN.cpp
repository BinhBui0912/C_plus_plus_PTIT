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

struct NhanVien{
	string mnv = "00001";
	string ten;
	string sex;
	string ns;
	string dc;
	long long mst;
	string nk;
};

void nhap(NhanVien &a){
	getline(cin, a.ten);
	getline(cin, a.sex);
	getline(cin, a.ns);
	getline(cin, a.dc);
	cin >> a.mst;
	cin.ignore();
	getline(cin, a.nk);
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	if(a.nk[1] == '/') a.nk = "0" + a.nk;
	if(a.nk[4] == '/') a.nk.insert(3, "0");
}

void in(NhanVien a){
	cout << a.mnv << " " << a.ten << " " << a.sex << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk ;
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
