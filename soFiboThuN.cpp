#include<bits/stdc++.h>

using namespace std;

void solve (int n){
    if (n == 0) cout << "0" << endl;
    if (n == 1) cout << "1" << endl;
    else{
      	long long f0 = 0, f1 = 1, fn;
      	for (int i = 2; i <= n; i++){
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
	  	} 
		cout << fn << endl;
	}
}
int main (){
  	int t;
  	cin >> t;
  	while (t--){
      	int n;
     	cin >> n;
      	solve (n);
	}
}

