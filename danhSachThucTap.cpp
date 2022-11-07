#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	int stt;
	string msv;
	string ten;
	string lop;
	string email;
	string com;
};

bool rvs(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}

int main(){
	int n;
	cin >> n;
	struct SinhVien a[n];
	cin.ignore();
	for(int i=0; i<n; i++){
		a[i].stt=i+1;
    	getline(cin, a[i].msv);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].email);
		getline(cin, a[i].com);
	}
	sort(a, a+n, rvs);
	int t;
	cin >> t;
	string cty;
	for(int i=0; i<t; i++){
		cin >> cty;
		for(int i=0; i<n; i++){
	    	if(cty==a[i].com){
	    		cout << a[i].stt << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << " " << a[i].com << endl;
			}
		}
	}
    return 0;
}
