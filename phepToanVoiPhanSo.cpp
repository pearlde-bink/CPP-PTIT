#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu, mau;
};

void rutgon(PhanSo &p){ 
	long  long i=__gcd(p.tu,p.mau); 
	p.tu=p.tu/i; 
	p.mau=p.mau/i;
}

void process(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu=pow(a.tu*b.mau+a.mau*b.tu, 2);
	c.mau=pow(a.mau*b.mau, 2);
	rutgon(c);
	cout << c.tu << "/" << c.mau;
	PhanSo d;
	d.tu=c.tu*b.tu*a.tu;
	d.mau=c.mau*b.mau*a.mau;
	rutgon(d);
	cout << " ";
	cout << d.tu << "/"<< d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
