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
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n-1; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 1; i <= n; i++){
			if(mp[i] == 0) cout << i << endl;
		}
	}
}
