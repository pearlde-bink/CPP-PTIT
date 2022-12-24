#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int t;
	double sum=0;
	cin >> t;
	for(int i=1; i<=t; i++){
		sum +=(1.0/i);
	}
	cout << setprecision(4) << fixed << sum;
}
