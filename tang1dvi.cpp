#include <iostream>

using namespace std;

void up(int &a) {
	a+=1;
}

int main() {
	int a;
	cin >> a;
	up(a);
	cout << "New Value of a: " << a;
	return 0;
}
