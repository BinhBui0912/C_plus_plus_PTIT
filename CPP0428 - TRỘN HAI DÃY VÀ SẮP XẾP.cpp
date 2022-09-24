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
		int n, m;
		cin >> n >> m;
		multiset<int> ms;
		long long a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ms.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			ms.insert(b[i]);
		}
		for(int x : ms){
			cout << x << " ";
		}
		cout << endl;
	}
}

