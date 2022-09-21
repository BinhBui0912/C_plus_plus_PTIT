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
		int tongle = 0, tongchan = 0;
		int cnt = 0;
		for(int i = 0; i < s.size(); i=i+2){
		 	int x = s[i] - '0';
		 	tongchan += x;
		}
		for(int i = 1; i < s.size(); i=i+2){
		 	int x = s[i] - '0';
		 	tongle += x;
		}
		if(tongchan >= tongle) cnt = tongchan - tongle;
		else cnt = tongle - tongchan;
		if(cnt % 11 == 0) cout << "1"<<endl;
		else cout << "0" << endl;
	}
}

