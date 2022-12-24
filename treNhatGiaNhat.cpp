#include <bits/stdc++.h>
using namespace std;

struct Age{
	string ten, bday;
};

void nhap(Age &ptr){
	cin >> ptr.ten;
	getline (cin, ptr.bday);
}

void xuat(Age &ptr){
	cout << ptr.ten << endl;
}

bool sxep(Age &ptr1, Age &ptr2){
	return ptr1.bday>ptr2.bday;
}

void xuli(Age &ptr){
	string s=ptr.bday.substr(7, 4)+ptr.bday.substr(4, 2)+ptr.bday.substr(1, 2);
	ptr.bday=s;
}

int main() {
	int n, i;
	cin >> n;
	cin.ignore();
	Age a[n];
	for (i=0; i<n; i++)		nhap (a[i]);
	for (i=0; i<n; i++)		xuli (a[i]);
	sort (a, a+n, sxep);
	xuat (a[0]);
	xuat (a[n-1]);
	return 0;
}
