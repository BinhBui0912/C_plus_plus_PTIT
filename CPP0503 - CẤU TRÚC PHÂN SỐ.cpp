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

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
	long long z = __gcd(p.tu, p.mau);
	p.tu /= z;
	p.mau /= z;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}

int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
