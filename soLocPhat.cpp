#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
		int a;
		cin >> a;
		for(int i=0; i<a; i++){
			int b=a%=10;
			if(b== 0 || b==6 || b==8) cout << "YES" << endl;
			else cout << "NO" << endl;
			a/=10;
		}
		t--;
	}
}
