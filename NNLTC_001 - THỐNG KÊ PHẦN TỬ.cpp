#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int cnt = 1e9 + 7;

int main(){
    int n;
    vector<int> v;
    map<int, int> mp;
    while(cin >> n) v.push_back(n);
    for(auto i : v) mp[i]++;
    for(auto i : v){
    	if(mp[i] != 0){
    		cout << i << " " << mp[i] << endl;
    		mp[i] = 0;
		}
	}
	return 0;
}


