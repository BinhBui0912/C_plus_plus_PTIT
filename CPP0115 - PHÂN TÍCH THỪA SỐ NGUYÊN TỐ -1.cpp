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
		long long n, i, dem ;
		cin >> n;
		for(i=2; i <=n; i++){
			dem = 0;
			while(n%i ==0){
				dem++;
				n = n/i;
			}
			if(dem>0) cout << i << " " << dem << " ";
		}
		cout << endl;
	}
} 

