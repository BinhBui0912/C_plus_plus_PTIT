#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	vector<int> a(n);
    	for(int i = 0; i < n; i++) cin >> a[i];
    	sort(a.begin(), a.end());
    	cout << a[k-1] << endl;
	}
	return 0;
}

