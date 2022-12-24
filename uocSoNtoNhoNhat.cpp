#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	if(n<=2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int uocNtoMin(int n){
	cout << "1 ";
	for(int i=2; i<=n; i++){
		if(i%2==0) cout << "2 ";
		else{
			for(int j=2; j<=n; j++){
				if(nto(j)){
					if(i%j==0) cout << j << " ";
				}
			}
		}
	}
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		uocNtoMin(n);
		cout << endl;
	}
}
