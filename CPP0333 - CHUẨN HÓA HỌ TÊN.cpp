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
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
//	cout << v[v.size()-1];
	
	int I = (v.back()).size();
	for(int i = 0; i < I; i++){
		v[v.size()-1][i] = toupper(v[v.size()-1][i]);
	}
//	cout << v.back();
	for(int i = 0 ; i < v.size()-1; i++){
		I = v[i].size();
		for(int j = 0; j < I; j++){
			if(j==0) v[i][j] = toupper(v[i][j]);
			else v[i][j] = tolower(v[i][j]);
		}
	}
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i];
		if(i!= v.size()-2) cout <<" ";
	}
	
	cout << ", ";
	cout << v.back();
}

