#include <bits/stdc++.h>
using namespace std;

int oddeven(string s){ 
	if(s[s.size()-1] % 2 == 0) return 0; 
	if(s[s.size()-1] % 2 == 1) return 1;
}

int main(){ 
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		int chan=0, le=0;
		for(auto i : v){
			if(oddeven(i)) le++;
			else chan++;
		}	
		int c=0;
		if(v.size()%2==0 && chan>le) c=1;
		else if(v.size()%2!=0 && chan<le) c=1; 
//		else if(v.size()%2==0 && chan<le) cout << "NO" << endl;
//		else if(v.size()%2!=0 && chan>le) cout << "NO" << endl;
		if(c==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

