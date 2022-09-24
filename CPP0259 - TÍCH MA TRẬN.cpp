#include<bits/stdc++.h>

using namespace std;

void Nhap(int A[][100],int B[][100], int n, int m, int p){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin >> B[i][j];
		}
	}
}

void Tich(int A[][100],int B[][100],int C[][100], int n, int m, int p, int k){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			for(int k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void Xuat(int C[][100], int n, int p){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n,m,p,k, A[100][100], B[100][100],C[100][100];
	cin >> n >> m >> p;
	Nhap(A,B,n,m,p);
	Tich(A,B,C,n,m,p,k);
	Xuat(C,n,p);
	return 0;
}

