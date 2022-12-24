#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int n;
    cin >> n; 
    int a[n];
    for(int i=0; i<n; i++){ 
        cin >> a[i]; 
    }
    for(int i=0; i<n-1; i++){ 
        for(int j=i+1; j<n; j++){ 
            int rv;
            if(a[j]<=a[i]){
                rv=a[i];
                a[i]=a[j];
                a[j]=rv;
            }
        }
    }
    for(int i=0; i<n; i++){ 
        if(a[i]-a[i+1]<0) cout << a[i] << " ";
    }
}
