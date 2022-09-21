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

struct SinhVien{
	string ten;
	string lop;
	string msv = "B20DCCN001";
	string ns;
	float gpa;
}; 

void nhap(SinhVien &a){
	getline(cin, a.ten);
	getline(cin, a.lop);
	getline(cin, a.ns);
	cin >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0"); 
}

void in(SinhVien a){
	cout << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
