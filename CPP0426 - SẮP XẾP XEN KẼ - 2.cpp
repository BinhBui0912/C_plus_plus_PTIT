#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		int x = 0, y = n-1;
		while(x < y){
			cout << a[y] << " " << a[x] << " ";
			x++;
			y--;
		}
		if(x == y) cout << a[x];
		cout << endl;
	}
	return 0;
}
/*
1 2 3 .7. 8 9 -> 9 1 8 2 7 3 
1 2 3 .6. 7 8 9 -> 9 1 8 2 7 3 6
*/

