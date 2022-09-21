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
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string a;
	while(ss >> a){
		v.push_back(a);
	}
	cout << v.back();
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}

