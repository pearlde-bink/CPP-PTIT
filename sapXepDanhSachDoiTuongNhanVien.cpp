#include<bits/stdc++.h>
using namespace std;

int j=1;

class NhanVien{
	public:
		string mnv="000";
		string name, sex, bday, addr, tax, rgst;
		string age;
	friend istream &operator >> (istream &input, NhanVien &a){
		scanf("\n");
		getline(cin, a.name);
		if(j<10) a.mnv+="0"+to_string(j);
		else a.mnv+=to_string(j);
		j++;
		cin >> a.sex >> a.bday;
		scanf("\n");
		getline(cin, a.addr);
		cin >> a.tax >> a.rgst; 
		a.age=a.bday.substr(6,4) + a.bday.substr(0,2) + a.bday.substr(4,2);
		return input;
	}
	friend ostream &operator << (ostream &output, NhanVien a){
		cout << a.mnv << " " << a.name << " " << a.sex << " " << a.bday << " " << a.addr << " " << a.tax << " " << a.rgst << endl;
		return output;
	}
	friend bool operator < (NhanVien a, NhanVien b){
		return stoi(a.age) > stoi(b.age);
	}
};

void sapxep(NhanVien a[], int n){
		sort(a, a+n);
		reverse(a, a+n);
	}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
