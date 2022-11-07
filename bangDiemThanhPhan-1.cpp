#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv;
	string ten;
	string lop;
	float d1, d2, d3;
};

bool rvs(SinhVien a, SinhVien b){
	return a.msv<b.msv;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds, ds+n, rvs);
}

void nhap(SinhVien &sv){
	//getline(cin, sv.msv);
	cin >> sv.msv;
	cin.ignore();
	getline(cin, sv.ten);
	//getline(cin, sv.lop);
	cin >> sv.lop;
	cin >> sv.d1 >> sv.d2 >> sv.d3;	
}

void in_ds(SinhVien sv[100], int n){
	for(int i=0; i<n; i++){
    	cout << i+1 << " " << sv[i].msv << " " << sv[i].ten << " " << fixed << setprecis0ion(1) << sv[i].lop << " " << sv[i].d1 << " " << sv[i].d2 << " " << sv[i].d3 << endl;
	}
}
int main(){
	int n;
	cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i=0; i<n; i++){
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
