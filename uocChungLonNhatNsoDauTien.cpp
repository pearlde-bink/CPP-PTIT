#include <iostream>
#include <math.h>

using namespace std;

int ucln

int main()
{
    int t;
    cin >> t;
    while(t--){
	    int a;
	    cin >> a;
	    for(int k = a+1; k <= 1000; k++){
	    	int dem=0;
	    	for(int i=1; i<=a; i++){
	    		if(k%i==0) dem++;
	   		}
	   		if(dem=a) {
	   			cout << k << endl;
	   			break;
			}
			else continue;
		}
	}
}

/*
	#include<bits/stdc++.h> 
	using namespace std; 

	long long ucln(long long a, long long b){ 
	    int gcd = __gcd(a,b); 
	    return a*b/gcd;
	}
	long long kq(int n){ 
	    long long a = 1; 
	    for(long long i=2;i<=n;i++){ 
	        a = ucln(a,i);
	    } 
	    return a;
	} 
	int main(){ 
	    int t; 
	    cin>>t; 
	    while(t--){ 
	        int n; 
	        cin>>n; 
	        cout<<kq(n)<<endl;
	    }
	}
*/
