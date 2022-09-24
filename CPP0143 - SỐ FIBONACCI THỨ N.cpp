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
		long long n, i;
		cin >> n;
		long long F1 = 1, F2 = 1, Fn;
		if(n==1 || n==2) cout << "1";
		else{
			for(int i=3; i<=n; i++){
				Fn = F1+F2;
				F1 = F2;
				F2 = Fn;
			}
			cout << Fn;
		}
		cout << endl;
	}
}

