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
        for(int i=0; i<n ;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        if(n%2==0){
            for(int i=n-1; i>=n/2; i--){
                cout << a[i]<< " " << a[n-i-1]<< " ";
            }
        }
        else {
            for(int i=n-1; i>n/2; i--){
                cout << a[i]<< " " << a[n-i-1]<< " ";
            }
            cout << a[n/2];
        }
        cout << endl;
    }
}
