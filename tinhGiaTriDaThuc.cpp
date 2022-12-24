/*
//khong hieu tai sao code nay sai

#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n,x;
        cin >> n >> x;
        int a[n];
        a[0]=1;
        for(int i=n; i>0; i--){
        	cin >> a[i];
		}
		double p=0;
		for(int i=1; i<=n; i++){
        	p+=(a[n-i+1]*pow(x, n-i));
		}
		cout << p%1000000007 << endl;
    }
}
*/

#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
int main()
{
    int T;
    cin >> T;
    while(T--){
        long long n,k,s=0;
		cin>>n>>k;
		long long a[n],h=1;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i>=0;i--){
			s=(s+h*a[i])%1000000007;
			h=(h*k)%1000000007;
		}
		cout<<s<<endl;
    }
}
