#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			if(a[i] == a[i+1]){
				a[i] = a[i]*2;
				a[i+1] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] != 0) cout << a[i] << " ";
			else cnt++;
		}
		for(int i = 0; i < cnt; i++) cout << "0" << " ";
		cout << endl;
	}
	return 0;
}
