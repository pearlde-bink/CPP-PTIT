#include <bits/stdc++.h>
using namespace std;

int main(){ 
	string s;
	cin >> s;
	string a;
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);	
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='i')
			cout << "." << s[i];
	}
}

