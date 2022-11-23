#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int cnt = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, p;
    	cin >> n >> p;
    	int cnt = 0;
    	int res = p;
    	while(res <= n){
    		cnt = cnt + n/res;
    		res = res * p;
		}
		cout << cnt << endl;
	}
	return 0;
}


