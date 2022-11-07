#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
		string s;
		getline(cin,s);
		int dem=s.size();
		for(int i=0; i<s.size()-1; i++){
			for(int j=i+1; j<s.size(); j++){
				if(s[j]==s[i]) dem++;
			}	
		}
		cout << dem << endl;
	}
}

