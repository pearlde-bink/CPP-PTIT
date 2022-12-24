#include<bits/stdc++.h>
using namespace std;

int ucln(int n){
	int dem=1;
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			dem+=i;
			//n/=i;
		}
	}
//	if(n!=0) dem+=n;
//	return dem;
	if(dem==n) return true;
	return false;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		if(ucln(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
