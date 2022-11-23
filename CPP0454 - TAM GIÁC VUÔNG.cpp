#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	long long a[n];
    	for(int i = 0; i < n; i++) cin >> a[i];
    	sort(a,a+n);
    	for(int i = 0; i < n; i++) a[i] = a[i]*a[i];
    	int res = -1;
    	for(int i = 0; i < n-2; i++){
    		for(int j = i+1; j < n-1; j++){
    			if(binary_search(a,a+n,a[i]+a[j])){
    				res = 1;
    				break;
				}
			}
		}
		if(res == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

// 1 9 16 25 36

