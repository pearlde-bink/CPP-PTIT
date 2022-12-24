#include<bits/stdc++.h>
using namespace std;

bool nto(long n){
	if(n<=1) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

void uoc3(long long a, long long b, int dem){
	dem=0;
	for(long long i=a; i<=sqrt(b); i++){
		if(nto(i)) dem++;
	}
	cout << dem;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long a, b;
		cin >> a >> b;
		int dem;
		uoc3(a, b, dem);
		cout << endl;
	}
}
