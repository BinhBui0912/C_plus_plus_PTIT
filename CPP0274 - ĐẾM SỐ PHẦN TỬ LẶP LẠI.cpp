#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		int A[n];
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		for(int i = 0; i < n; i++){
			if(A[i] == A[i+1] && A[i] != A[i-1]) cnt = cnt +2;
			else if(A[i] == A[i+1] && A[i] == A[i-1]) cnt++;
			
		}
		cout << cnt << endl;
	}
}
