#include <bits/stdc++.h>
using namespace std;

bool nto(int n){
	if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
    	if(n%i==0) return false;
	}
	return true;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int a,b;
        cin >> a >> b;
        int dem=0;
        for(int i=a; i<=b; i++){
    		if(nto(i)) dem++;
		}
		cout << dem << endl;
		dem=0;
    }
}
