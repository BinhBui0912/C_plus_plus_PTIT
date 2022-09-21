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
		long long n;
		cin >> n;
		long long A[n];
		for(int i = 0; i < n; i++){
			cin >> A[i];
		} 
		for(int i = 0; i < n; i++){
			if(A[i] != 0) cout << A[i] << " ";
		}
		for(int i = 0; i < n; i++){
			if(A[i] == 0) cout << A[i] << " ";
		}
		cout << endl;
	}
}

