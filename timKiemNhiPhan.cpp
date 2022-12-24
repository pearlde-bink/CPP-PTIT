#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int dem=-1;
        for(int i=0; i<n; i++){
            if(a[i]==x){ 
                dem=1;
                break;
            }
        }
        cout << dem<< endl;
    }
}
