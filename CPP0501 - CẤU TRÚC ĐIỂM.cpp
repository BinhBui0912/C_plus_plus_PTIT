//cac dieu can ghi nho trong string
//length() va size()
//cin.ignore va getline(cin,s)
//substr(n,k): cat xau
//stoi: chuyen thanh kieu int
//stoll: chuyen thanh kieu longlong
//to_string(): chuyen so thanh string
//stringstream ss(): tach tu theo dau cach

#include<bits/stdc++.h>

using namespace std;

struct Point{
	double x, y;
};

void input(Point &A){
	cin >> A.x >> A.y;
}

double distance(Point A, Point B){
	return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}
int main(){
	struct Point A,B;
	int t;
	cin >> t;
	while(t--){
		input(A); input(B);
		cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
}
