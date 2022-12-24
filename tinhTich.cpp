#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        long long a[n];
        long long b[m];
        int k,h;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int j=0; j<m; j++){
            cin >> b[j];
        }
        
        sort(a, a+n);
        for(int i=0; i<n; i++){
            k = a[n-1];
        }
        
        sort(b, b+m);
        for(int j=0; j<m; j++){
            h = b[0];
        }
        cout << (long long)h*k << endl;
    }
}
