/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	long long a;
    	cin >> a;
    	long long b=a;
    	int dem=0;
    	if(b<2) return 0;
    	else{
	    	for(int i=2; i<=sqrt(b); i++){
	    		while(b%i==0) {
					if(i%2==0) dem++;
	    			b/=i;
	    		}
			}
			if(b!=1) if(b%2==0) dem++;;
		}
		cout << dem << endl;
	}
}
*/

/*#include<iostream>
#include<cmath>
using namespace std;
    int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        int i = 1, dem = 0;
    	cin >> n;
        for (i = 1; i <= n; i++){
            if (n % i == 0){
                if (i % 2 == 0){
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
}*/

#include <bits/stdc++.h>

using namespace std;

int pt(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if ( i % 2 == 0) {
                cnt++;
            }
            if ((n / i) != i) {
                if ((n / i) % 2 == 0) {
                    cnt++;
                }
            }
    }
}
return cnt;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << pt(n);
        cout << endl;
    }
}
