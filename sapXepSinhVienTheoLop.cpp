#include <bits/stdc++.h>
using namespace std;

typedef struct{
	string msv, name, lop, mail;
} SinhVien;

void input(SinhVien &a){
	cin >> a.msv;
	scanf("\n");
	getline(cin, a.name);
	cin >> a.lop >> a.mail;
}

bool can_swap(SinhVien a, SinhVien b){
	if(a.lop < b.lop) return true;
	else if(a.lop == b.lop) return a.msv < b.msv;
	else return false;
}

void output(SinhVien a){
	cout << a.msv << " " << a.name << " " << a.lop << " " << a.mail;
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	SinhVien a[n+1];
	for(int i=0; i<n; i++){
		input(a[i]);
	}
	sort(a, a+n, can_swap);
	for(int i=0; i<n; i++){
		output(a[i]);
	}
}
