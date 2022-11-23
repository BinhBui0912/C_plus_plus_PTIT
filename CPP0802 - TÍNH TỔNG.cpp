#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

int main(){
    ifstream in("DATA.in");
    string s;
    long long cnt = 0;
    while(in >> s){
    	if(s.size() >= 1 && s.size() <= 9 && isdigit(s[0])){
    		cnt += stoi(s);
		}
	}
	cout << cnt;
	in.close();
	return 0;
}



