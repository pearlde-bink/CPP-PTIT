#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	  cin>>t;
	  while(t--){
	    long long n,k=0;
	    cin>>n;
	    if(n%2==0) k=2;
	    while(n%2==0){
	      n/=2;
	    }
	    for (int i=3;i<=sqrt(n);i+=2){ 
	      if(n%i==0) k=i;
	      while(n%i==0){
	        n/=i;
	      }
	    }
	    if(k>n) cout << k << endl;
	    else cout << n << endl;
	  }
}
