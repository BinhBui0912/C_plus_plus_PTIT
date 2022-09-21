#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		long long S = 0;
		cin >> n >> k;
		if(k>0){
			for(int i = 1; i <= n; i++){
				S += i%k;
			}
			cout << S << endl;
		}
	}
}
