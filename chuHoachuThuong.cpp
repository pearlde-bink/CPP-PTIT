#include <cctype>
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
		char a;
		cin >> a;
		if(a>='a' && a<='z'){
			a-=32;
		}
		else if(a>='A' && a<='Z'){
			a+=32;
		}
		cout << a << endl;
		t--;
	}
}
