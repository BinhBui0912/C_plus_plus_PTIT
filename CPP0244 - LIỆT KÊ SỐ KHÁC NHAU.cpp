#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n], B[10000] = {0};
	for(int i = 0; i < n; i++){
		cin >> A[i];
		B[A[i]]++;
	}
	sort(A,A+n);
	for(int i = 0; i < n; i++){
		if(B[A[i]] > 0){
			cout << A[i] << " ";
			B[A[i]] = 0;
		}
	}
	return 0;
}
