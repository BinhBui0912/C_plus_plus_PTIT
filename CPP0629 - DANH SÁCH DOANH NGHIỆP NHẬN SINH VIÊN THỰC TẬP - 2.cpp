#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

class DoanhNghiep{
	private:
		string ma;
		string ten;
		long long number;
	public:
		friend istream& operator >> (istream& in, DoanhNghiep &a);
		friend ostream& operator << (ostream& out, DoanhNghiep a);
		long long getNumber();
		string getMa();
};

string DoanhNghiep::getMa(){
	return ma;
}

long long DoanhNghiep::getNumber(){
	return number;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getNumber() == b.getNumber()) return a.getMa() < b.getMa();
	return a.getNumber() > b.getNumber();
}

void sapxep(DoanhNghiep ds[], int n){
	sort(ds,ds+n,cmp);
}

istream& operator >> (istream& in, DoanhNghiep &a){
	in.ignore();
	getline(in, a.ma);
	getline(in, a.ten);
	in >> a.number; 
	return in;
}

ostream& operator << (ostream& out, DoanhNghiep a){
	out << a.ma << " "  << a.ten << " " << a.number << endl;
	return out;
}

int main(){
	DoanhNghiep ds[1000];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> ds[i];
	sapxep(ds,n);
	int q;
	cin >> q;
	while(q--){
		long long a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
		for(int i = 0; i < n; i++){
			if(ds[i].getNumber() >= a && ds[i].getNumber() <= b) cout << ds[i];
		}
	} 
	return 0;
}
