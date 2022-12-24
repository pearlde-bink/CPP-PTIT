#include<bits/stdc++.h>
using namespace std;
int i=1;
class CongNhan{
	public:
		string mcn="000"; 
		string name, sex, bday, addr, tax, rgst;
		string day, month, year;
	friend istream &operator >> (istream &input, CongNhan &a){
		scanf("\n");
		getline(cin, a.name);
		cin >> a.sex >> a.bday;
		scanf("\n");
		getline(cin, a.addr);
		cin >> a.tax >> a.rgst;
		if(i<10) a.mcn+="0"+to_string(i);
		else a.mcn+=to_string(i);
		i++;
		for(int i=0; i<2; i++){
    	a.month+=a.bday[i];
		}
		for(int i=3; i<5; i++){
	    	a.day+=a.bday[i];
		}
		for(int i=6; i<10; i++){
	    	a.year+=a.bday[i];
		}
		return input;
	}
	friend ostream &operator << (ostream &output, CongNhan a){
		cout << a.mcn << " " << a.name << " " << a.sex << " " << a.bday << " " << a.addr << " " << a.tax << " " << a.rgst << endl;
		return output;
	}
	friend bool operator < (CongNhan a, CongNhan b){
		if(a.year < b.year) return true;
		else if(a.year == b.year && a.month < b.month) return true;
		else if(a.year == b.year && a.month == b.month && a.day < b.day) return true;
		else return false;
	}
};
void sapxep(CongNhan a[], int n){
	sort(a, a+n);
}

int main(){
	CongNhan ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

/*
3
Nguyen Van A
nam
10/22/1982
ML-HD-HN
093802394
31/12/2013
Ly Thi B
Nu
10/15/1988
ML-HD-HN
2903840934
22/08/2011
Hoang Thi C
Nu
04/02/1981
Ml-HD-Hn
93284722312
22/08/2011
*/

/*
#include <bits/stdc++.h>
using namespace std;

struct CongNhan{
    string stt, name, gender, bday, address, code, day1;
    string day, month, year;
};

void nhap(CongNhan &a){
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

bool can_swap(CongNhan a, NhanVien b){
	if(a.year < b.year) return true;
	else if(a.year == b.year && a.month < b.month) return true;
	else if(a.year == b.year && a.month == b.month && a.day < b.day) return true;
	else return false;
}

void sapxep(CongNhan a[], int n){
	for (int i = 0; i < n; i++){
		a[i].stt=to_string(i+1);
		int k=a[i].stt.size();
		if(k==1) a[i].stt.insert(0, "0000");
		if(k==2) a[i].stt.insert(0, "000");
	}
	sort(a, a+n, can_swap);
}

void inds(CongNhan a[], int N){
    for (int i = 0; i < N; i++){
        cout << a[i].stt << " " << a[i].name << " " << a[i].gender << " " << a[i].bday << " " << a[i].address << " " << a[i].code << " " << a[i].day1;
        cout << endl;
    }
}

int main(){
    CongNhan ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


*/
