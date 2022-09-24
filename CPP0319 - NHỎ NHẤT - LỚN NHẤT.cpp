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
	int s, m;
	cin >> m >> s;
	if(s > m*9 || s == 0 && m > 1){
		cout << "-1 -1" ;
		return 0;
	}
	int lon[m] = {0}, be[m] = {0};
	int cnt = s;
	for(int i = 0; i < m; i++){
		if(s >= 9){
			lon[i] = 9;
			s -= 9;
		}
		else if(s >= 0 && s <= 8){
			lon[i] = s;
			s = 0;
		}
		else break;
	}
	cnt--;
	for(int i = m-1; i > 0; i--){
		if(cnt >= 9){
			be[i] = 9;
			cnt -= 9;
		}
		else if(cnt >= 0 && cnt <= 8){
			be[i] = cnt;
			cnt = 0;
		}
		else break;
	}
	be[0] = cnt + 1;
	for(int i = 0; i < m; i++) cout << be[i];
	cout << " ";
	for(int i = 0; i < m; i++) cout << lon[i];
	return 0;
} 

