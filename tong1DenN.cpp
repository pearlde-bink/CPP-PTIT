
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
    	long long b, a;
    	cin >> b;
    	if(b>0){
    		a=(1+b)*b/2;
    		cout << a << endl;
    	}
    	else return 0;
    	t--;
	}
}
