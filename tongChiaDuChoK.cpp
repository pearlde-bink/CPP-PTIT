#include<iostream> 
using namespace std; 

int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int n;
        long long k;
        cin>>n>>k; 
        int s=0;
        for(int i=1; i<=n; i++){
            int e=i%k;
            s+=e;
        }
        if(s==k) cout << "1"<< endl;
        else cout << "0" << endl;
    }
    return 0;
}
