#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int a[m];
        int b[n];
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        vector<int> v;
        for(int i=0; i<m; i++){
            v.push_back(a[i]);
        }
        for(int i=0; i<n; i++){
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        for (auto x : v)
       		cout << x << " ";
        cout << endl;
    }
}
