#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string stt, name, gender, bday, address, code, day1;
    string day, month, year;
};

void nhap(NhanVien &a){
    scanf("\n");
    getline(cin, a.name);
    cin >> a.gender >> a.bday;
    scanf("\n");
    getline(cin, a.address);
    cin >> a.code >> a.day1;
    for(int i=0; i<2; i++){
    	a.month+=a.bday[i];
	}
	for(int i=3; i<5; i++){
    	a.day+=a.bday[i];
	}for(int i=6; i<10; i++){
    	a.year+=a.bday[i];
	}
}

bool can_swap(NhanVien a, NhanVien b){
	if(a.year < b.year) return true;
	else if(a.year == b.year && a.month < b.month) return true;
	else if(a.year == b.year && a.month == b.month && a.day < b.day) return true;
	else return false;
}

void sapxep(NhanVien a[], int n){
	for (int i = 0; i < n; i++){
		a[i].stt=to_string(i+1);
		int k=a[i].stt.size();
		if(k==1) a[i].stt.insert(0, "0000");
		if(k==2) a[i].stt.insert(0, "000");
	}
	sort(a, a+n, can_swap);
}

void inds(NhanVien a[], int N){
    for (int i = 0; i < N; i++){
        cout << a[i].stt << " " << a[i].name << " " << a[i].gender << " " << a[i].bday << " " << a[i].address << " " << a[i].code << " " << a[i].day1;
        cout << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
