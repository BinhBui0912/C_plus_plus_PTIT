#include<bits/stdc++.h>

using namespace std;

int check(long long n, long long k){
	long long S = 0;
	if(k>0){
		for(int i = 0; i <= n; i++){
			S += i % k;
		}
		if(S == k) return 1;
		else return 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, S = 0;
		cin >> n >> k;
		cout << check(n,k) << endl;
	}
}
