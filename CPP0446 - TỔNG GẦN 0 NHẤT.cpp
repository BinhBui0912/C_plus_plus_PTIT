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
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int tmp = abs(a[0] + a[1]);
		int res = a[0] + a[1];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(abs(a[i] + a[j]) < tmp){
					tmp = abs(a[i] + a[j]);
					res	= a[i] + a[j];
				}
			}
		}
		cout << res << endl;
	}
}
