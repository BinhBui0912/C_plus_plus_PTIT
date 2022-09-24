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
		PhanSo();
		PhanSo(long long, long long);
		friend istream& operator >> (istream& in, PhanSo &a);
		friend ostream& operator << (ostream& out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
};

PhanSo::PhanSo(){
	this->tu = this->mau = 0;
}

PhanSo::PhanSo(long long x, long long y){
	this->tu = x;
	this->mau = y;
}

istream& operator >> (istream& in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}

PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong;
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong.mau = a.mau * b.mau;
	long long z = __gcd(tong.tu, tong.mau);
	tong.tu /= z;
	tong.mau /= z;
	return tong;
}

ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
