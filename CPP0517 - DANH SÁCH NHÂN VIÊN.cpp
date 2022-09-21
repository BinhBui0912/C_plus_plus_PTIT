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

struct NhanVien{
	string ten;
	string sex;
	string ns;
	string dc;
	long long mst;
	string nk;
}; 

void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.sex;
	cin >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst;
	cin >> a.nk;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	if(a.nk[1] == '/') a.nk = "0" + a.nk;
	if(a.nk[4] == '/') a.nk.insert(3, "0");
}

void in(NhanVien a){
	cout << a.ten << " " << a.sex << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk << endl;
}

void inds(NhanVien ds[] , int N){
	for(int i = 0; i < N; i++){
		string cnt = to_string(i+1);
		while(cnt.size() < 5) {
			cnt = "0" + cnt;
		}
		cout << cnt << " ";
		in(ds[i]); 
	}
}

int main(){
	struct NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++) nhap(ds[i]);
	inds(ds, N);
	return 0;
}
