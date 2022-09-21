#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int a[n]; 
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=1;; i++){
			int cnt = 0;
			for(int j = 0; j < n; j++){
				if(i == a[j]) cnt++;
			}
			if(cnt == 0) {
				cout << i << endl;
				break;
			}
		}
		
		
	}
}
