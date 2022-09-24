#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char n;
		cin >> n;
		if(n >= 'a' && n <= 'z') n = n-32;
		else if(n >= 'A' && n<= 'Z') n = n+32;
		cout << n <<endl;
	}
}
