#include<bits/stdc++.h>
using namespace std;

bool nto(long long n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

bool tang(long long n){
	long long m=n;
	int a,b;
	while(m>9){
		a=m%10;
		m/=10;
		b=m%10;
		if(a<=b) return false; 
	}
	return true;
}

bool giam(long long n){
	long long m=n;
	int a,b;
	while(m>9){
		a=m%10;
		m/=10;
		b=m%10;
		if(a>=b) return false; 
	}
	return true;
}

int main(){
	int tc;
	cin>> tc;
	while(tc--){
		long long n, dem=0;
		cin >> n;
		long long a=pow(10,n-1);
		long long b=pow(10,n)-1;
		for(long long i=a; i<=b; i++){
//			if(nto(i)){
//				if(tang(i)) dem++;
//				else if(giam(i)) dem++;
//			}
			if(tang(i)){
				if(nto(i)) dem++;
			}
			else if(giam(i)){
				if(nto(i)) dem++;
			}
		}
		cout << dem << endl;
	}
}
