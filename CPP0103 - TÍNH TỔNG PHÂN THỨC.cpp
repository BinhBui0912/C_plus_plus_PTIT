#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n, i;
	double s = 0 ;
	cin >> n;
	for(i=1; i<=n; i++){
		s = s+(1.0/i);
	}
	cout << fixed << setprecision(4) << s;
}
