#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int tmp[100000] = {0};

bool cmp(int a, int b){
	if(tmp[a] == tmp[b]) return a < b;
	else return tmp[a] > tmp[b];
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			tmp[a[i]]++;
		}
		sort(a, a+n, cmp);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		for(int i = 0; i < 100000; i++){
			tmp[i] = 0;
		}
	}
	return 0;
}


