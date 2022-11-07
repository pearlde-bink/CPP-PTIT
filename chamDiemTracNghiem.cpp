#include <string>
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		string d1="101 A B B A D C C A B D C C A B D"; 
    	string d2="102 A C C A B C D D B B C D D B B"; 
    	float minus=0.0;
    	if(s[2]=='1'){
    		for(int i=4; i<=32; i+=2){   // tai sao lai bat dau tu 4 va ket thuc o 32?
    			if(s[i]==d1[i] || s[i]==d1[i]+32) continue;
    			else minus += (float) 2/3;
			}
		}
		if(s[2]=='2'){
    		for(int i=4; i<=32; i+=2){
    			if(s[i]==d2[i] || s[i]==d2[i]+32) continue;
    			else minus += (float) 2/3;
			}
		}
		float diem = 10.0 - minus;
		cout << setprecision(2) << fixed << diem << endl;
		t--;
	}
}
