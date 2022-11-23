#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n], res = -1;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			if(binary_search(a,a+n,a[i]+x)){
				res = 1;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}
