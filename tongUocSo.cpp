#include <bits/stdc++.h>

using namespace std;

int check(long long n){
	int dem=0;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
		dem+=i;
			n/=i;
		}
	}
	if(n!=1) dem+=n;
	return dem;
}

int main()
{
    long n;
    cin >> n;
    long a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
	}
	int dem=0;
	for(int i=0; i<n; i++){
    	dem+=check(a[i]);
	}
	cout << dem;
}
