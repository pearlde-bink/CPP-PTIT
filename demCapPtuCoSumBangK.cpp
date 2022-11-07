#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n];
        int dem=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n-1; i++){
            int j=i+1;
            while(j<n){
                if(a[j]+a[i]==k){
                    dem++;
                }
                j++;
            }
        }
        cout << dem << endl;
    }
}
