#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n ; i++){
        	cin >> a[i];
		}
		int dem=-1;
		for(int i=0; i<n-1 ; i++){
        	for(int j=i+1; j<n ; j++){
        		if(a[j]-a[i]>=dem && a[j]-a[i]>0) dem=a[j]-a[i];
			}
		}
		cout << dem << endl;
    }
}
