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

class PhanSo{
	private:
		long long tu;
		long long mau;
	public:
		PhanSo(long long, long long);
		friend istream& operator >> (istream& in, PhanSo &p);
		friend ostream& operator << (ostream& out, PhanSo p);
		void rutgon();
};

PhanSo::PhanSo(long long a, long long b){
	this->tu = a;
	this->mau = b;
}

istream& operator >> (istream& in, PhanSo &p){
	in >> p.tu;
	in >> p.mau;
	return in;
}

void PhanSo::rutgon(){
	long long z = __gcd(tu, mau);
	tu /= z;
	mau /= z;
}

ostream& operator << (ostream& out, PhanSo p){
	out << p.tu << "/" << p.mau;
	return out;
}

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
