#include <bits/stdc++.h>

using namespace std;

int gt(int n){
    int m=1;
    for(int i=1; i<=n; i++){
        m*=i;
    }
    return m;
}

int main()
{
    int n;
    cin >> n;
    int dem=0;
    for(int i=1; i<=n; i++){
        dem+=gt(i);
    }
    cout << dem;
}
