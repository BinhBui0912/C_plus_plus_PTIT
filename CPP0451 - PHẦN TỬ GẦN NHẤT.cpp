#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<int> a(n);
    	for(int i = 0; i < n; i++) cin >> a[i];
    	int x, k;
    	cin >> k >> x;
    	int cnt = lower_bound(a.begin(),a.end(),x) - a.begin();
    	int left, right;
    	if(a[cnt] == x){
    		left = cnt-1;
    		right = cnt+1;
		}
		else{
			left = cnt-1;
			right = cnt;
		}
		for(int i = k/2-1; i >= 0; i--) cout << a[left - i] << " ";
		for(int i = 0; i < k/2; i++) cout << a[right + i] << " ";
		cout << endl;
	}
	return 0;
}

