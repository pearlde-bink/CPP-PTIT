#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    string s;
    getline (cin, s);
    string word; 
    cin >> word;
    stringstream ss(s);
    string erased;
    while(ss >> erased){
        if(erased != word){
        	cout << erased << " ";
		}
    }
}
