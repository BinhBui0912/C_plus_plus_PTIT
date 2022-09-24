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
		int chan = 0 , le = 0;
		int I = s.size();
		if(s[I-1] %2 == 0) chan++;
		else le++;
		for(int i = 0; i < I; i++){
			if(s[i] == ' '){
				if(s[i-1] % 2 == 0) chan++;
				else le++;
			}
		}
		int cnt = chan + le ;
		if(chan > le && cnt % 2 == 0 || chan < le && cnt % 2 != 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

