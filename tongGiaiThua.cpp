#include <string>
#include <iostream>
using namespace std;

int main() {
	int t;
	long long tong=0;
	long m=1;
	cin >> t;
	for(int i=1; i<=t; i++){
		m*=i;
		tong+=m;
	}
	cout << tong;
}
