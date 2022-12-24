#include <string>
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
		string s;
		cin >> s;
		if(s.size() < 4 || s.size() > 18) return 0;
		else{
			int found = s.find("084");
			string outc = s.erase(found, 3);
			cout << outc << endl;
		}
		t--;
	}
}
