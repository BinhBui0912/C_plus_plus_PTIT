#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		long long n, x;
		cin >> n >> x;
		long long a[n];
		long long cnt = 1000000007;
		long long sum = 0;
		long long lt = 1;
		for(int i = n-1; i >= 0; i--) cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			lt %= cnt;
			sum += a[i]*lt;
			sum %= cnt;
			lt *= x;
		}
		cout << sum << endl;
	}
}
