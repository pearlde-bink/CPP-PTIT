#include<bits/stdc++.h> 

using namespace std;
//ucln
long long GCD(long long a, long long b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}

//bcnn
long long  LCM(long long a, long long b){
	return (a*b)/GCD(a,b);
}

    int main() {
	int t;
	cin >> t;
	while(t--){
		long long a,b; 
		cin >> a >> b;
		cout <<  LCM(a,b) << " " << GCD(a,b) << endl;
	}
}
