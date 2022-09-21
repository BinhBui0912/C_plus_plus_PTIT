#include<iostream>
using namespace std;
int main(){
	long long n, i, tich = 1, sum = 0;
	cin >> n;
	for(i=1; i<=n ; i++){
		tich = tich*i;
		sum = sum + tich;
	}
	cout << sum;
	return 0;
}
