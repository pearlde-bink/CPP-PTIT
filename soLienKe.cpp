#include<bits/stdc++.h> 
using namespace std; 

int main (){ 
    int t; 
    cin >> t; 
    while(t--){ 
        string s; 
        cin >> s; 
        int check =1; 
        for(int i=0;i<s.length()-1;i++) { 
            if(abs(s[i]-s[i+1])!=1){ 
                check =0; 
                break;
            }
        }
        if(check ==1) cout<< "YES" << endl;
        else cout <<"NO" <<endl ;
    }
}
