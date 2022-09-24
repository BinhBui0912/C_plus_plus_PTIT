#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int A[n][m];
		int B[n] = {0}, C[m] ={0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> A[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(A[i][j] == 1){
					B[i] = 1;
					C[j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			if(B[i] == 1){
				for(int j = 0; j < m; j++){
					A[i][j] = 1;
				}
			}
		}
		for(int j = 0; j < m; j++){
			if(C[j] == 1){
				for(int i = 0; i < n; i++){
					A[i][j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
}
