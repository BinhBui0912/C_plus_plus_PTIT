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
		int A[n];
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A,A+n);
		if(n%2 == 0){
			for(int i = n-1; i >= n/2; i--){
				cout << A[i] << " " << A[n-i-1] << " ";
			}
		}
		else {
			for(int i = n-1; i > n/2; i--){
				cout << A[i] << " " << A[n-i-1] << " ";
			}
			cout << A[n/2];
		}
		cout << endl;
	}
}

