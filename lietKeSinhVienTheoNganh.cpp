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

string caps(string s){
	for(int i=0; i<s.size(); i++){
		s[i]=toupper(s[i]);
	}
	return s;
}

string major(string s){
	stringstream ss(s);
	string res="";
	string tmp;
	while(ss>>tmp){
		res+=toupper(tmp[0]);
	}
	return res.substr(0,2);
}

int main(){
	int n,m;
	cin >> n;
	SinhVien a[n+1];
	for(int i=0; i<n; i++){
		input(a[i]);
	}
	cin >> m;
    cin.ignore(); 
	while(m--){
		string s;
		getline(cin, s);
		string k=caps(s);
		cout << "DANH SACH SINH VIEN NGANH " << k << ":" << endl;
		for(int i=0; i<n; i++){
			if(major(s)=="AT" || major(s)=="CN"){
				if(a[i].lop[0]!='E' && major(s)==a[i].msv.substr(5,2)) output(a[i]);
			}
			else{
				if(major(s)==a[i].msv.substr(5,2)) output(a[i]);
			}
		}
	}
}
/*
4
B16DCCN011
NGUYEN TRONG DUC ANH
D16CNPM1
SKDJFIDHFIUSDFHIU
B15DCCN215
TO NGOC HIEU
D15CNPM3
SDNFCFKASDFNADFAS
B15DCKT150
NGUYEN NGOC SON
D15CQKT02-B
SDKJFNJDFKDAFNKAD
B15DCKT199
NGUYEN TRONG DUNG
D15CQKT02-B
SNDFKSDJFHKFDFAJF
1
Ke toan
*/
