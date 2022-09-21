#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, Q;
		cin >> n >> Q;
		int A[n];
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		while(Q--){
			long long S = 0;
			int L, R;
			cin >> L >> R;
			for(int i = L-1; i <= R-1; i++){
				S += A[i];
			}
			cout << S << endl;
		}
		
	}
}
