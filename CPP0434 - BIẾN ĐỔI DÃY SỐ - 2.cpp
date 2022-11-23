#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << a[0]*a[1] << " ";
		for(int i = 1; i < n-1; i++){
			cout << a[i-1]*a[i+1] << " ";
		}
		cout << a[n-1]*a[n-2] << endl; 
	}
	return 0;
}
