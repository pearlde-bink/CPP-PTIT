#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long x, y;
};

void nhap(PhanSo &a){
	cin >> a.x >> a.y;
}

void rutgon(PhanSo &a){ 
	long long i=__gcd(a.x,a.y); 
	a.x=a.x/i; 
	a.y=a.y/i;
}

PhanSo tong(PhanSo a, PhanSo b){
	PhanSo t;
	t.x=a.x*b.y + b.x*a.y;
	t.y=a.y*b.y;	
	rutgon(t);
	return t;
}

void in(PhanSo a){
	cout << a.x << "/" << a.y;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
