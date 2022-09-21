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
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int cnt = 0;
		for(int i = 1; i < n; i++){
			if(a[i] > a[0]){
				cout << a[0] << " " << a[i];
				break;
			}
			else cnt++;
		}
		if(cnt == n-1) cout << "-1";
		cout << endl;
	}
}
