#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	long long a;
	long i; 
	cin >> n;
	while(n>0){
		cin >> a;
		long long dem=0;
		for (int i=1; i<=sqrt(a); i++) {
		    if(a%i==0) {
    		    dem+=i;
    			long long b= a/i;
    			if( b!= i )	 dem+=b; 
		    }
	    }
	    cout << dem << endl ;
		n--;
	}
}
