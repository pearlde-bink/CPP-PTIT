#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tach;
		vector<string> v;
		while(ss >> tach){
			v.push_back(tach);
		}
		for(int i=0; i<v.size(); i++){
			cout << v[v.size()-i-1] << " ";
		}
		cout << endl;
	}
}
