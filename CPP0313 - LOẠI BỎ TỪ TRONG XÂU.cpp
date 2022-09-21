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
	string s;
	getline(cin,s);
	string s2;
	getline(cin,s2);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tmp != s2) cout << tmp << " ";
	}
}

