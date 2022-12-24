#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n, a;
    	cin >> n >> a;
    	int count=0;
    	for(int i=2; i<=n; i++){
    		while(n%i==0){
    		    count++;
    		    n/=i;
        		if(count==a){
        		    cout << i << endl;
        		    break;
        		}
    		}
		}
		if(a > count) cout << "-1" << endl;
	}
}
