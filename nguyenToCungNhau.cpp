#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	if(n<=1) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

//int gcd(int a, int b){
//	for(int i=min(a, b); i>0; i--){
//		if(a%i==0 && b%i==0) return i;
//	}
//}

void ntcn(int n, int t){
	t=1;
	for(int i=2; i<=n; i++){
		if(__gcd(i,n)==1) t++;
	}
	if(nto(t)) cout << "1" << endl;
	else cout << "0" << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int t;
		ntcn(n, t);
	}
}
