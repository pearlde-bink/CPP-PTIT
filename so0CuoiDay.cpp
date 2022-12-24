#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0; i<n; i++){
            cin >> a[i];
        }
        vector<long long> v;
        long long dem=0;
        for(long long i=0; i<n; i++){
            if(a[i]!=0) v.push_back(a[i]);
            else dem++;
        }
        for(long long i=0; i<dem; i++){
            v.push_back(0);
        }
        for(long long i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
