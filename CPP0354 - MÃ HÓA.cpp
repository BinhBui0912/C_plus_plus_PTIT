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
		string s;
		getline(cin,s);
		map<char,int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]] >= 1){
				cout << s[i] << mp[s[i]] ;
				mp[s[i]] = 0;
			}
		}
		cout << endl;
	}
}

