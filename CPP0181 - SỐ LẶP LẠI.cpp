#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		long long a, x, y;
		cin >> a >> x >> y;
		int i = __gcd(x,y);
		while(i--)
		{
			cout << a;
		}
		cout << endl;
	}
}
