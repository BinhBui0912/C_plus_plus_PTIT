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
	vector<char> v;
	for(int i = 0 ; i < s.size(); i++){
		s[i] = tolower(s[i]);
		v.push_back(s[i]);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] != 'a' && v[i] != 'e' && v[i] != 'i' && v[i] != 'o' && v[i] != 'u' && v[i] != 'y'){
			cout << ".";
			cout << v[i];
		}
	}
}

