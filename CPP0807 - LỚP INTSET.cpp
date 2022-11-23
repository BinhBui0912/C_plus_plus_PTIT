#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    ifstream in("DATA.in");
    int n, m;
    in >> n >> m;
    set<int> s1, s2;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
    	in >> a[i];
    	s1.insert(a[i]);
	}
	for(int i = 0; i < m; i++){
		in >> b[i];
		s2.insert(b[i]);
	}
	for(auto x : s1){
		if(s2.find(x) != s2.end()) cout << x << " ";
	}
    in.close();
}
