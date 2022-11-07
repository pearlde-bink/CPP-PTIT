#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long m,n;
		int a,b;
		cin >> m >> n >> a >> b;
		int dem=0;
		for(int i=m; i<=n; i++){
			if(i%a==0 || i%b==0) dem++;
		}
		cout << dem << endl;
	}
}
