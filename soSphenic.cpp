#include<bits/stdc++.h>
using namespace std;

bool sphenic(int n){
	int dem=0;
	int a=1;
	for(int i=2; i<=n; i++){
		int res=0;
		while(n%i==0){
		   res++;
		   n/=i;
		} 
		if(res>=2) return 0;
		if(res==1) dem++;
    }
//	while(i<=n){
//		if(n%i==0) dem++;
//		n/=i;
//		i++;
//	}
	if(dem!=3) return false;
	return true;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		if(sphenic(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
