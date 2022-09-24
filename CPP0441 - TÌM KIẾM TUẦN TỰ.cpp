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

int find(int a[], int n, int x){
	int res = -1;
	for(int i = 0; i < n; i++){
		if(a[i] == x) {
			res = i + 1 ;
			break;
		}
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << find(a, n, x);
		cout << endl;
	}
}
