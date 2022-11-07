#include<bits/stdc++.h> 
using namespace std ; 

void chuan1(string s){
	char i=toupper(s[0]);
	cout << i;
	for(int i=1; i<s.size(); i++){
		cout << (char)tolower(s[i]);
	}
}
int main(){ 
    string name;
    getline(cin, name);
    stringstream ss(name);
    string tmp;
    vector<string> v;
    while(ss>>tmp){
    	v.push_back(tmp);
	}
	for(int i=0; i<v.size()-1; i++){
		chuan1(v[i]);
		while(i<=v.size()-2){
			cout << " ";
			break;
		}
	}
	cout << ", ";
	cout << (char)toupper(v.size()-1); 
}

/*
while(ss>>tmp){
	name+=toupper(s[0]);
	for(int i=0; i<tmp.size(); i++){
		name+=tolower(tmp[i]);
	}
}
*/
