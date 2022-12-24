#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            while(a[i]>0){
                v.push_back(a[i]%10);
                a[i]/=10;
            }
        }
        sort(v.begin(), v.end());
        cout << v[0] << " ";
        for(int i=1; i<v.size()-1; i++){
            for(int j=i+1; j<v.size(); j++){
                if(v[j]!=v[i]) cout << v[j] << " ";
                break;
            }
        }
        cout << endl;
    }
}
