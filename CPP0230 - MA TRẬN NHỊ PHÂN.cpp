#include<bits/stdc++.h>

using namespace std;

void Nhap(int A[][3], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> A[i][j];
		}
	}
}

int main(){
	int n;
	cin >> n;
	int A[n][3];
	Nhap(A,n);
	int dem1, dem0, count = 0;
	for(int i = 0; i < n; i++){
		dem1 = 0, dem0 = 0;
		for(int j = 0; j < 3; j++){
			if(A[i][j] == 1) dem1++;
			else dem0++;
		}
		if(dem1 > dem0) count++;
	}
	cout << count ;
	return 0;
}
