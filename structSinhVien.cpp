#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv="B20DCCN001";
	string ten;
	string lop;
	string bday;
	float gpa;
};

void nhap(SinhVien &sv){
	getline(cin, sv.ten);
	getline(cin, sv.lop);
	getline(cin, sv.bday);
	cin >> sv.gpa;
	if(sv.bday[1]=='/'){
		sv.bday="0"+sv.bday;
		//if(sv.bday[3]=='/') sv.bday[2]='0'+sv.bday[2];
	}
	if(sv.bday[4]=='/') {
		//if(sv.bday[4]=='/') sv.bday[3]='0'+sv.bday[3];
		sv.bday.insert(3, "0");
	}
}

void in(SinhVien sv){
	cout << sv.msv << " ";
	cout << sv.ten << " ";
	cout << sv.lop << " ";
	
	cout << sv.bday << " ";
	cout << fixed << setprecision(2) << sv.gpa << " ";
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
