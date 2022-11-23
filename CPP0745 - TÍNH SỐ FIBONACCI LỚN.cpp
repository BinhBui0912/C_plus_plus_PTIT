#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int cnt = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
    	long long fib[1000];
    	fib[0] = 0;
    	fib[1] = 1;
    	for(int i = 2; i <= n; i++){
    		fib[i] = fib[i-1] + fib[i-2];
    		fib[i] %= cnt;
		}
		cout << fib[n] << endl;
	}
	return 0;
}


