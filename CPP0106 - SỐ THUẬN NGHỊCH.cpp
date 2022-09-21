#include<iostream>
#include<iomanip>
using namespace std;
long long TN(long long n){
	long long x, s = 0, m =n;
	while(n>0){
		x = n%10;
		s = s*10 + x;
		n = n/10;
	}
	if(s==m) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x, s = 0;
		cin >> n;
		if(TN(n) == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
