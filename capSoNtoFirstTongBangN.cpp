#include<bits/stdc++.h> 

using namespace std;

int nto(long a){
    if(a<2) return 0; 
    for(int i=2; i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    	long n;
    	cin >> n;
    	int yes=0;
    	for(int i=2; i<=n/2; i++){
    		if(nto(i) && nto(n-i)) {
    			cout << i << " " << n-i << endl;
    			yes=1;
    			break;
			}
		}
		if(yes==0) cout << "-1" << endl;
	}
}
