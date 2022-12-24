#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//passByReference
/*void upper(string &s){
	for(int i=0; i<=s.size(); i++){
		if(s[i]>='a' && s[i]<='z') s[i]-=32;
	}
}

int main() {
	string s;
	cin >> s;
	upper(s);
	cout << s;
}*/

//passByValue
void upper(string *s){
	for(int i=0; i<=(*s).size(); i++){
		if((*s)[i]>='a' && (*s)[i]<= 'z') (*s)[i]-=32;
	}
}

int main() {
	string s;
	cin >> s;
	upper(&s);
	cout << s;
}
