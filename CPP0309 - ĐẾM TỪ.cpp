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
	cin.ignore();
	while(t--){
		int cnt = 0;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			cnt ++;
		}
		cout << cnt << endl;
	}
}

