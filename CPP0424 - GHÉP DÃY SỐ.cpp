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
		 int k, n;
		 cin >> k >> n;
		 long long a[k][n];
		 long long b[n*k];
		 int cnt = 0;
		 for(int i = 0; i < k; i++){
		 	for(int j = 0; j < n; j++){
		 		cin >> a[i][j];
		 		b[cnt] = a[i][j];
		 		cnt++;
			 }
		 }
		 sort(b,b+n*k);
		 for(int x : b){
		 	cout << x << " ";
		 }
		cout << endl;
	}
}

