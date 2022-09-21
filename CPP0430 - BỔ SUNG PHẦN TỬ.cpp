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
		int n;
		cin >> n;
		long long a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i = 0; i < n-1; i++){
			if(a[i] != a[i+1]){
				cnt += a[i+1] - a[i] - 1;	
			}
		}
		cout << cnt;
		cout << endl;
	}
}

