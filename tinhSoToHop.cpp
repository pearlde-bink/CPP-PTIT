#include<bits/stdc++.h>
using namespace std;

int giaiThua(int n){
	for(int i=n-1; i>0; i--){
		n*=i;
	}
	return n;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a,b;
		cin >> a >> b;
		cout << giaiThua(a)/(giaiThua(b)*giaiThua(a-b)) << endl;
	}
    return 0;
}
