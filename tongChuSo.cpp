
#include <iostream>

using namespace std;
long a;
void lower(){
	int b=0;
	while(a>0){
		b+=a%10;
		a/=10;
	}
	a=b;
}

int main() {
    int t;
	cin >> t; 
	while(t--){
		cin >> a;	
		while(a>9) lower();
		cout << a << endl;
	}
}
