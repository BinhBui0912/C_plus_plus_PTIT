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
		cin.ignore();
		string b;
		getline(cin , b);
		int k;
		cin >> k;
		set<char> s;
		for( int i = 0; i < b.size(); ++i){
			s.insert(b[i]);
		}
		if(26 - s.size() <= k) cout << "1" << endl;
		else cout << "0" << endl;
	}
}

