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

long long BoiChung(long long a, long long b){
	int c = __gcd(a,b);
	return a*b/c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, i;
		cin >> n;
		long long a = 1;
		for(i=2 ; i<=n; i++){
			a = BoiChung(a,i);
		}
		cout << a << endl;
	}
}

