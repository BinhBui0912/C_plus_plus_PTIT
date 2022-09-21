#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double ChamDiem(char a[], char b[]){
	int i;
	float diem = 0;
	for(i=0; i<15; i++){
		if(a[i] == b[i]) diem = diem + 2.0/3;
	}
	return diem;
}

int main(){
	char A[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char B[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	int t;
	cin >> t;
	while(t--){
		int i, n;
		cin >> n;
		char C[15];
		for(i =0 ; i < 15; i++ ) cin >> C[i];
		if(n == 101) cout << fixed << setprecision(2) << ChamDiem(C,A) << endl;
		else if (n == 102) cout << fixed << setprecision(2) << ChamDiem(C,B) << endl;
	}
}
