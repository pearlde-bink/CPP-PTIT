#include<bits/stdc++.h>
using namespace std;
int n;
bool oke=true;
string b;

void next(void){
    int i=n;
    while(i>0 && b[i]!='0'){
        b[i]='0';
        i--;
    }
    if(i>0) b[i]='1';
    else oke = false;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        b[i]='0';        
    }
    while(oke){
        for(int i=1; i<=n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
        next();
    }
    oke = true;
    return 0;
}
