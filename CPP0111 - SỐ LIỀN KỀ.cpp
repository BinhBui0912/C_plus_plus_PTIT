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
		int check = 0, dem = 0;
		cin >> n;
		while(n>10){
			a = n%10;
			b = (n/10)%10;
			dem++;
			if(a-b == 1 || b-a == 1) check++;
			n/=10;
		}
		if(check == dem) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
} 

