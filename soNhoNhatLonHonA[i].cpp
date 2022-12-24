#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            b[i]=a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            	if(a[j]==b[i] && j==n-1) cout << '_' << " ";
            	else if(a[j]==b[i]) cout << a[j+1] << " ";
       		}
        }
        cout << endl;
    }
}
/*
2
9
6 3 9 8 10 2 1 15 7
4
13 6 7 12
*/
