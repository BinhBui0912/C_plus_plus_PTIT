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
	while(t--){
		int a, m, x = -1;
		cin >> a >> m;
		for(int i =0; i<= m-1; i++){
			if(a*i%m == 1){
				x = i;
				break; 
			}
		}
		cout << x << endl;
	}
}

