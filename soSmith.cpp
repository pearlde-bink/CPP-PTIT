#include <bits/stdc++.h>

using namespace std;

int tong(int n){
    int sum1=0;
    for(;n!=0;){
        sum1+=n%10;
        n/=10;
    }
    return sum1;
}

int ntu(int n){
    int sum2=0;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            sum2+=tong(i);
            n/=i;
        }
    }
    return sum2;
}

bool nto(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if(nto(n)) cout << "NO" << endl;
        else{
            if(ntu(n) == tong(n)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
