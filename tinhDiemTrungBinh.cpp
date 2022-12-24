#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	float a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	sort(a, a+n);
	float dem1=1;
	for(int i=1; i<n; i++){
	   if(a[i]==a[0]) dem1++;
	}
	float dem2=1;
	for(int i=0; i<n-1; i++){
	   if(a[i]==a[n-1]) dem2++;
	}
	float diem=0.00;
	for(int i=0; i<n; i++){
	    diem+=a[i];
	}
	cout << fixed << setprecision(2) << (diem-dem1*a[0]-dem2*a[n-1])/(n-dem1-dem2);
}
