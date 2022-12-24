#include <bits/stdc++.h> 
using namespace std; 
int n; 
string str; 
bool ok = true; 

void nextBitString() { 
    int i = n-1; 
    while(i>=0 && str[i]!='0') { 
        str[i] = '0'; 
        i--;
    }
    if(i>=0) str[i] = '1';
    else ok = false;
}

int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        cin >> n; 
        for(int i=0; i<n; i++) { 
            str[i] = '0';
        } 
        while(ok) { 
            for(int i=0; i<n; i++) { 
                cout << str[i];
            }
            cout<<" "; 
            nextBitString(); 
        } 
        ok = true; 
        cout << endl;
    }
}
