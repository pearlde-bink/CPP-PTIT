#include<bits/stdc++.h> 
using namespace std ; 

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--){
		string s;
		int n;
		set<char> se;
		cin >> s >> n;
		for(char x:s){
			se.insert(x);
		}
		int k=26-se.size();
		if(k<=n) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
