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
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& out, SinhVien a);
};

SinhVien::SinhVien(){
	this->msv = "B20DCCN001";
	this->ten = this->lop = this->ns = "";
	this->gpa = 0;
}

istream& operator >> (istream& in, SinhVien &a){
	getline(in, a.ten);
	in >> a.lop;
	in >> a.ns;
	in >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa; 
	return out;
}

int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}


