#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t; 
    cin>>t; 
    cin.ignore(1); 
    while(t--) { 
        string a; 
        getline(cin, a); 
        int dem=0; 
        for(int i=0;i<a.length();i++) { 
            if(a[i]=='\t' || a[i]=='\n' || a[i]==' ') { 
                while(a[i]=='\t' || a[i]=='\n' || a[i]==' '){ 
                    i++;
                }
                i--;
            } else { 
                while(a[i]!='\t' && a[i]!='\n' && a[i]!=' ' && a[i]!='\0'){ 
                    i++;
                } 
                ++dem; 
                i--;
            }
        }
    cout<<dem<<endl;
    }
}

//Cach2
/*
#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string s;
        getline (cin , s);
        stringstream ss(s);
        string word;
        int cnt =0;
        while(ss>>word){
            cnt++;
        }
        cout << cnt << endl;
    }
}
*/
