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

struct ThiSinh{
	string ten;
	string ns;
	float d1;
	float d2;
	float d3;
};

void nhap(ThiSinh &A){
	getline(cin, A.ten);
	getline(cin, A.ns);
	cin >> A.d1;
	cin >> A.d2; 
	cin >> A.d3;
}

void in(ThiSinh A){
	cout << A.ten << " " << A.ns << " " << fixed << setprecision(1) << A.d1 + A.d2 + A.d3 ;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
