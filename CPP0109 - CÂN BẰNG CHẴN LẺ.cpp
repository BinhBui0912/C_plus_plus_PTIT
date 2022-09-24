#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std; 

int KiemTra(int n){
	int i, check = 0;
	while(n>0){
		i = n%10;
		if(i%2 == 0) check ++;
		else check --;
		n = n/10;
	}
	if(check == 0) return 1;
	else return 0;
}

int main(){
	int n, i, dem = 0;
	cin >> n;
	for(i = pow(10,n-1); i < pow(10, n); i++){
		if(KiemTra(i) == 1) {
			dem++;
			cout << i << " ";
			if(dem % 10 == 0) cout << endl;
		}
		
	}
	
}
