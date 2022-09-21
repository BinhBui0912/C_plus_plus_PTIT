//cac dieu can ghi nho trong string
//length() va size()
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, a, b;
		cin >> n;
		a = n%10;
		b = (n/10) % 10;
		if(b == 8 && a == 6) cout << "1" << endl;
		else cout << "0" << endl;
	}
} 

