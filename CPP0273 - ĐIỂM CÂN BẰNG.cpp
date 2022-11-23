#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	long long n;
		cin >> n;
		long long a[n];
		long long res = -1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long suml = a[0];
		long long sumr = 0;
		for(int i = 2; i < n; i++){
			sumr += a[i];
		}
		if(suml == sumr) res = 1;
		for(int i = 2; i <= n-2; i++){
			suml += a[i-1];
			sumr = sumr - a[i];
			if(suml == sumr){
				res = i+1;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}


