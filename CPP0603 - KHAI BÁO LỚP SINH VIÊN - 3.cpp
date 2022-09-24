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
		string ten, lop, ns, msv;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& out, SinhVien a);
};

SinhVien::SinhVien(){
	this->msv = "B20DCCN001";
	this->gpa = 0;
	this->lop = this->ten = this->ns = "";
}

istream& operator >> (istream& in, SinhVien &a){
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	for(int i = 0 ; i < a.ten.size(); i++){
		if(i == 0){
			a.ten[i] = toupper(a.ten[i]);
		}
		else if(a.ten[i] == ' '){
			a.ten[i+1] = toupper(a.ten[i+1]);
		}
		else if(i != 0 && a.ten[i-1] != ' ' ){
			a.ten[i] = tolower(a.ten[i]);
		}
	}
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
