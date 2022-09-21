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

void nhap(PhanSo &x){
	cin >> x.tu >> x.mau;
}

PhanSo tong(PhanSo &p, PhanSo &q){
	PhanSo z;
	z.tu = p.tu * q.mau + p.mau * q.tu;
	z.mau = p.mau * q.mau;
	long long cnt = __gcd(z.tu, z.mau);
	z.tu /= cnt;
	z.mau /= cnt;
	return z;
}

void in(PhanSo x){
	cout << x.tu << "/" << x.mau;
}

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0; 
}
