#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long x,y;
		long long p;
		cin >> x >> y >> p;
		long a=1;
		for(int i=1; i<=y; i++){
			a=(a*x)%p;
		}
		cout << a;
		cout << endl;
	}
}
