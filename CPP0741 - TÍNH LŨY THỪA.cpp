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
		long long x, y, p;
		cin >> x >> y >> p;
		long long cnt = 1;
		for(int i = 1; i <= y ; i++){
			cnt  = cnt * x % p;
		}
		cout << cnt << endl;
	}
}
