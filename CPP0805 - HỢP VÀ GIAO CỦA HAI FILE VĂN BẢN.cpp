#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    string s;
    set<string> ms, ms1, ms2;
    while(in1 >> s){
    	for(int i = 0; i < s.size(); i++){
    		s[i] = tolower(s[i]);
		}
		ms.insert(s);
		ms1.insert(s);
	}
	while(in2 >> s){
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
		ms.insert(s);
		ms2.insert(s);
	}
	for(auto x : ms){
		cout << x << " ";
	}
	cout << endl;
	for(auto i : ms1){
		if(ms2.find(i) != ms2.end()) cout << i << " ";
	}
	in1.close();
	in2.close();
	return 0;
}
