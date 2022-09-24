//cac dieu can ghi nho trong string
//length() va size() 
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach
//s.insert(k, value): chen them gia tri value sau vi tri k tai xau s
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){ 
			v.push_back(tmp);
		}
		for(int i = v.size() - 1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
