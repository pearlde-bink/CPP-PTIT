#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv, ten, lop, bday;
		float gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();
};

SinhVien::SinhVien(){
	this -> msv = "B20DCCN001";
	this -> ten = "";
	this -> lop = "";
	this -> bday = "";
	this -> gpa = 0;
}

void SinhVien::nhap(){
	getline(cin, ten);
	getline(cin, lop);
	getline(cin, bday);
	cin >> gpa;
	if(bday[1]=='/') bday.insert(bday.begin(), '0');
	if(bday[4]=='/') bday.insert(bday.begin()+3, '0');
}

void SinhVien::xuat(){
	cout << msv << " ";
	cout << ten << " ";
	cout << lop << " ";
	cout << bday << " ";
	cout << fixed << setprecision(2) << gpa << " ";
}

int main(){
    SinhVien a;
    a.nhap();
	a.xuat();
    return 0;
}
