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

void output(SinhVien a){
	cout << a.msv << " " << a.name << " " << a.lop << " " << a.mail;
	cout << endl;
}

int main(){
	int n,m;
	cin >> n;
	SinhVien a[n+1];
	for(int i=0; i<n; i++){
		input(a[i]);
	}
	cin >> m;
	while(m--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
		for(int i=0; i<n; i++){
			if(a[i].lop.substr(1,2)==s.substr(2,2)) output(a[i]);
		}
	}
}
