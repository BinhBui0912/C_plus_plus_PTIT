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

int main(){
	int t;
	cin >> t;
	while(t--){
		double a , b, c, d, z;
		cin >> a >> b >> c >> d;
		z = sqrt((a-c) * (a-c) + (b-d) * (b-d));
		cout << fixed << setprecision(4) << z << endl;
	}
} 

