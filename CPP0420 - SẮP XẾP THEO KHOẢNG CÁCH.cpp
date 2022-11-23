#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int x, n;

bool cmp(int a, int b){
	return abs(x-a) < abs(x-b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stable_sort(a,a+n,cmp);
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

