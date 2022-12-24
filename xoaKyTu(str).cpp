#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    string s;
    getline (cin , s);
    string word; 
    cin >> word;
    stringstream re(s);
    string token;
    while(re >> token){
        if(token != word){
        	cout << token << " ";
		}
    }
}
