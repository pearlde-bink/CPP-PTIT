#include <iostream>

using namespace std;

int main() {
	int a=5;
	cout << (int)&a << endl;
	int address;
	cin >> address;
	int  *p=reinterpret_cast<int*>(address);
	*p=10;
	cout << a;
	return 0;
}
