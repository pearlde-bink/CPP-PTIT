#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=990 && n>=0){
        	if(n<=445) cout << "-1" << endl;
	        else if(n<=520 && n>=450) cout << "7" << endl;
	        else if(n<=595 && n>=525) cout << "8" << endl;
	        else if(n<=725 && n>=600) cout << "9" << endl;
	        else if(n<=795 && n>=730) cout << "10" << endl;
	        else if(n<=845 && n>=800) cout << "10" << endl;
	        else if(n<=940 && n>=850) cout << "10" << endl;
	        else if(n<=990 && n>=945) cout << "10" << endl;
		}
        else return 0;
    }
}
