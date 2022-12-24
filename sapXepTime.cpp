#include<bits/stdc++.h>
using namespace std;

struct time{
	int h, m, s;
	long b;
};

bool rvs(struct time a,struct time c){
	return a.b < c.b;
}

int main(){
	struct time a[n];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
		a[i].b= a[i].h*3600 + a[i].m*60 + a[i].s;
	}
	sort(a, a+n, rvs);
	for(int i=0; i<n; i++){
		cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
	}
}


