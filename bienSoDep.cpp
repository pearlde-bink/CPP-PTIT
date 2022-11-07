#include <bits/stdc++.h>
using namespace std;

int process(string s) {
	if(s[5]==s[6] && s[6]==s[7] && s[7]==s[9] && s[9]==s[10]) return 1;
	
	if(s[5]==s[6] && s[6] == s[7] && s[9] == s[10]) return 1;
	
	if((s[5]=='6' || s[5]=='8') && (s[6]=='6' || s[6]=='8') && (s[7]=='6' || s[7]=='8') && (s[9]=='6' || s[9]=='8') && (s[10]=='6' || s[10]=='8')) return 1;
	
	if (s[5]<s[6] && s[6]<s[7] && s[7]<s[9] && s[9]<s[10]) return 1;
	
	return 0;
}
int main () {
	int t; cin >> t;
	while (t--) {
		string c;
		cin >> c;
		if (process(c))	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
