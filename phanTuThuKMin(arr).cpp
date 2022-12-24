#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
      			int e;
                if(a[j]<=a[i]){
                    e=a[i];
                    a[i]=a[j];
                    a[j]=e;
                }
            }
        }
        cout << a[k-1] << endl;
    }
}
