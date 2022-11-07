#include<bits/stdc++.h>
using namespace std;
    
struct NhanVien{
	string gender;
	string ten;
	string bday;
	string addr;
	string mst;
	string regist;
};

void nhap(NhanVien &ds){
	cin.ignore();
	getline(cin, ds.ten);
	getline(cin, ds.gender);
	getline(cin, ds.bday);
	getline(cin, ds.addr);
	getline(cin, ds.mst);
	getline(cin, ds.regist);
}

void inds(NhanVien ds[],int N){
	for(int i = 0; i < N; i++) {
		/*while(i<10) cout << "0000" << i+1 << " ";
		else cout << "000" << i+1 <<" ";*/
		cout<<fixed<<setfill('0')<<setw(5)<<stt;
		cout << ds[i].ten << " ";
		cout << ds[i].gender << " ";
		cout << ds[i].bday << " ";
		cout << ds[i].addr << " ";
		cout << ds[i].mst << " ";
		cout << ds[i].regist << " ";
		cout << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
