#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main() {
	quick();
	int test;
	cin >> test;
	while(test--)
	{
		string s;
		cin >> s;
		int pos,l=s.size();
		for(int i=0;i<l-2;i++)
			if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4')
			{
				pos=i;
				break;
			}
		for(int i=0;i<l;i++)
		{
			if(pos==i||pos==i-1||pos==i-2)
			{
				continue;
			}
			cout << s[i];
		}
		cout<<endl;
	}
