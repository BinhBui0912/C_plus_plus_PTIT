#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    ifstream in("VANBAN.in");
    string s;
    set<string> ms;
    while(in >> s){
    	for(int i = 0; i < s.size(); i++){
    		s[i] = tolower(s[i]);
		}
		ms.insert(s);
	}	
	for(auto x : ms){
		cout << x << endl;
	}
	in.close();
	return 0;
}
