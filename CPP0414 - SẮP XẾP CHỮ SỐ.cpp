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
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		set<int> s;
		for(int i = 0; i < n; i++){
			while(a[i]>0){
				s.insert(a[i]%10);
				a[i]/=10;
			}
		}
		for(int x : s){
			cout << x << " ";
		}
		cout << endl;	
	}
}

