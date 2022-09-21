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
		int lt = 1; int sum = (s[s.size() - 1] - '0') % 5;
		for(int i = s.size()-2; i >= 0; i--){
			lt *= 2;
			lt %= 5;
			sum += (s[i] - '0') * lt;
			sum %=5;
		}
		if(sum == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}

