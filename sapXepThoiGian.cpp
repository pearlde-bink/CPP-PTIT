#include<bits/stdc++.h>
using namespace std;

struct Time{
	int gio, phut, giay;
	long long tong;
};

bool rvs(Time a, Time b){
	return a.tong>b.tong;
}

int main(){
	int n;
	cin >> n;
	struct Time a[n];
	for(int i=0; i<n; i++){
    	cin >> a[i].gio >> a[i].phut >> a[i].giay;
    	a[i].tong= a[i].gio*3600 + a[i].phut*60 + a[i].giay;
	}
	sort(a, a+n, rvs);
	for(int i=n-1; i>=0; i--){
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	}
    return 0;
}
