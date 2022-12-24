#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t ; 
    cin>>t ; 
    while(t--){ 
        int n ; 
        cin>>n ; 
        int a[n]; 
        int res ; 
        int temp = 100000000; 
        for(int i =0 ; i<n ;i++) cin>>a[i]; 
        for(int i =0 ; i<n ;i++){ 
            for(int j = i+1 ; j<n ; j++){ 
                if(abs(a[i]+a[j])< temp){ 
                    temp = abs(a[i]+a[j]); 
                    res = a[i]+a[j];
                }
            }
        } 
        cout<<res<<endl;
    }
}
