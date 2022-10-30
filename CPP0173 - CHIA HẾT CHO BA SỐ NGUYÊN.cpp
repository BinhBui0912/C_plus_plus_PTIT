#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
	return (a*b)/__gcd(a,b);
}

int main(){
	int t; 
	cin >> t;
	while(t--)
	{
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long a = bcnn(x,y);
		long long b = bcnn(a,z);
		long long sodau = pow(10,n-1);
		long long socuoi = pow(10,n)-1;
		long long cnt = sodau/b, tmp = socuoi/b;
		if(cnt < 1 && tmp < 1){
			cout << "-1" << endl;
			continue;
		}
		if(cnt == tmp && b*cnt < sodau) cout << "-1";
		if(b*cnt < sodau) cout << b*(cnt+1);
		else cout << b*cnt;
		cout << endl;
	}
}
