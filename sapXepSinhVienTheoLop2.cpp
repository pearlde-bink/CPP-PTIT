//code nay chay duoc tren dev c nma submit tren codeptit bi RTE
#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string msv;
		string name, lop, mail;
	friend istream &operator >> (istream &input, SinhVien &a){
		cin >> a.msv;
		scanf("\n");
		getline(cin, a.name);
		cin >> a.lop >> a.mail;
		return input;
	}
	friend ostream &operator << (ostream &output, SinhVien a){
		cout << a.msv << " " << a.name << " " << a.lop << " " << a.mail << endl;
		return output;
	}
	friend bool operator < (SinhVien a, SinhVien b){
		if(a.lop == b.lop) return a.msv < b.msv;
		return a.lop < b.lop;
	}
};

void sapxep(SinhVien a[], int n){
	sort(a, a+n);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
/*
4
B16DCCN011
Nguyen Trong DUc Anh
D16CNPM1
DFNDFJISDFHIS
B15DCCN215
To Ngoc Hieu
D15CNPM3
SKDJFNKSDFJFA
B15DCKT150
NGuyen Ngoc Son
D15CQKT02-B
SDJNFKAJDFNKD
B15DCKT199
Nguyen Trong Tung
D15CQKT03-B
NKDFJNDFKDFNK
*/
