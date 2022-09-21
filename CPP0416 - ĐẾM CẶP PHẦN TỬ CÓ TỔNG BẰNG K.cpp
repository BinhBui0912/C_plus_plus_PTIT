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
		int n,k;
		cin >> n >> k;
		int a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0 ; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[i] + a[j] == k) cnt++;
			}
		}
		cout << cnt ;
		cout << endl;	
	}
}

