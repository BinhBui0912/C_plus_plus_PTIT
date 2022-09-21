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

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, i;
		cin >> n;
		for(i=2; i<=sqrt(n); i++){
			while(n%i == 0){
				cout << i << " ";
				n = n/i;
			}
		}
		if(n!=1) cout << n ;
		cout << endl;
	}
}

