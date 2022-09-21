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
		int cnt = 0;
		for(auto x : mp){
			if(x.second >= 2) cnt += (x.second)*(x.second-1)/2;
		}
		cout << cnt + s.size() << endl;
		
	}
}

