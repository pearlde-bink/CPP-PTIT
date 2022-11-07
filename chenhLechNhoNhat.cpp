#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    int res = INT_MAX;
	    sort(a, a+n);
	    for(int i=1; i<n; i++){
	    	res=min(res, a[i]-a[i-1]);
		}
		cout << res << endl;
	}
}
