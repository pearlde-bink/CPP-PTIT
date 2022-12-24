#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
        	cin >> a[i];
		}
		int m=-1;
		for(int i=0; i<n; i++){
        	if(a[i]==k){
        		m+=i+2;
        		break;
			}
		}
		cout << m << endl;
	}
}

