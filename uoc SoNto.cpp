/* #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	long long a;
    	cin >> a;
    	long long b=a;
    	if(b<2) return 0;
    	else{
	    	for(int i=2; i<=sqrt(b); i++){
	    		while(b%i==0) {
					cout << i << " " ;
	    			b/=i;
	    		}
			}
			if(b!=1) cout << b << endl;
		}
	}
} */

 #include <bits/stdc++.h>

using namespace std;

void check(long long n){
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			cout << i << " ";
			n/=i;
		}
	}
	if(n!=1) cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    	long long a;
    	cin >> a;
    	check(a);
	}
}
