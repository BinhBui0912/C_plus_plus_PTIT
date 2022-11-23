#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		int pos1, pos2;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				pos1 = i;break;
			}
		
		}
		for(int i = n-1; i >= 0; i--){
			if(a[i] != b[i]){
				pos2 = i;break;
			}		
		}
		cout << pos1+1 << " " << pos2+1 << endl;
	}
}

