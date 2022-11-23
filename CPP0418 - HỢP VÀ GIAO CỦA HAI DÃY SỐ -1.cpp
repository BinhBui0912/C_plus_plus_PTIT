#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long m,n;
		cin >> n >> m;
		long long a[n], b[m];
		set<long long> s;
		set<long long> s2; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int j = 0; j < m; j++){
			cin >> b[j];
			s.insert(b[j]);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] == b[j]){
					s2.insert(a[i]);
					break;
				}
			}
		}
		for(auto x:s) cout << x << " ";
		cout << endl;
		for(auto z:s2) cout << z << " ";
		cout << endl;
	}
}

