//cac dieu can ghi nho trong string
//length() va size()
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int n;
void Tong(){
	int s = 0;
	while(n>0){
		s  = s + n%10;
		n = n/10;
	}
	n = s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		while(n>9) Tong();
		cout << n << endl;
	}
} 

