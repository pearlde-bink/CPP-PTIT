#include <bits/stdc++.h> 
using namespace std; 

int sothuannghich(string s){ 
    int n=s.length(); 
    for(int i=0;i<=n/2;i++){ 
        if(s[i]==s[n-i-1]) return 1;
    } 
    return 0;
}

int sochan(string s){ 
    for(int i=0;i<s.length();i++){ 
        if(s[i]%2!=0) return 0;
    }
    return 1;
} 

int main(){ 
    int t; 
    cin>>t; 
    cin.ignore(); 
    while(t--){ 
        string s; 
        getline(cin,s); 
        if(sothuannghich(s)&&sochan(s)) cout<<"YES\n"; 
        else cout<<"NO\n";
    }
}
