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
        int e;
        for(int i=0; i<n-1 ;i++){
            for(int j=i+1; j<n ;j++){
                if(a[j]<=a[i]){
                    e=a[i];
                    a[i]=a[j];
                    a[j]=e;
                }
            }
        }
        //sort(a, a+n);
        for(int i=0; i<n ;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
//cach 2 dung vector
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        for(auto x:v){
            cout << x << " ";
        }
        cout << endl;
    }
}
*/

//cach 3: dung multiset
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int a[n];
        multiset<int> se;
        for(int i=0; i<n; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        for(int x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}
*/
