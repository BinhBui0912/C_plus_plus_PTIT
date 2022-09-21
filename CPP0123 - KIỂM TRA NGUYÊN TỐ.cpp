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

int SNT(int n){
	int i;
	if(n<2) return 0;
	for(i=2; i<=sqrt(n) ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	if(SNT(n) == 1) cout << "YES";
	else cout << "NO";
}

