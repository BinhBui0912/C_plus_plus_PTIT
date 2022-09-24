#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, i, check = 0;
		cin >> n;
		while (n>0){
			i = n%10;
			if(i != 0 && i != 6 && i != 8) check++;
			n = n/10;
		}
		if(check == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
