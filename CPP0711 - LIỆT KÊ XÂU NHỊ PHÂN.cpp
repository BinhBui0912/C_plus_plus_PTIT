//cac dieu can ghi nho trong string
//length() va size()
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach

// ki thuat sinh ke tiep
// khoi tao<gia tri dau>
// while(khong phai gia tri cuoi>{
//		in gia tri hien tai
//   	sinh gia tri ke tiep}



#include<bits/stdc++.h>

using namespace std;

int n, i, check, a[100];

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) check = 0; // day la so cuoi cung
	else{
		a[i] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		check = 1;
		while(check){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		} 
		cout << endl;
	}
}
