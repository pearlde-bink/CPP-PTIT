#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long x, y;
};

void nhap(PhanSo &a){
	cin >> a.x >> a.y;
}

void rutgon(PhanSo &a){
	for(int i=2; i<a.y; i++){
	while(a.x%i==0 && a.y%i==0){
			a.x/=i;
			a.y/=i;
		}
	}
}
//cach 2 tim uoc chung lon nhat
/*
void rutgon(PhanSo &p){ 
	long long i=__gcd(p.t,p.m); 
	p.t=p.t/i; 
	p.m=p.m/i;
}
*/

void in(PhanSo a){
	cout << a.x << "/" << a.y;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
