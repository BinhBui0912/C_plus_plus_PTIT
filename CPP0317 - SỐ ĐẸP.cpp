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
		int check1 = 1, check2 = 1;
		for(int i = 0; i < s.size()/2; ++i){
			if(s[i] != s[s.size()-i-1]) {
				check1 = 0;
				break;
			}
		}
		for(int i = 0; i < s.size(); ++i){
			int x = s[i] - '0';
			if(x%2 != 0){
				check2 = 0;
				break;
			} 
		}
		if(check1 == 1 && check2 == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

