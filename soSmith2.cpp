#include<bits/stdc++.h>

using namespace std;

int sumOfNum(long long n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

bool solve(long long n){
    int m = sumOfNum(n);
    int sum = 0;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            sum += sumOfNum(i);
            n/=i;
        }
    }
    if(n!=1) sum += sumOfNum(n);
    return sum == m;
}

bool prime(long long n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    long long n; cin >> n;
    if(solve(n) && !prime(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
