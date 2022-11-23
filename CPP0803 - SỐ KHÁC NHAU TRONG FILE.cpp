#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int cnt = 1e9 + 7;

int main(){
    ifstream in("DATA.in");
    int n;
    map<int, int> mp;
    while(in >> n){
    	mp[n]++;
	}
	for(auto i : mp){
		cout << i.first << " " << i.second << endl;
	}
	in.close();
	return 0;
}


