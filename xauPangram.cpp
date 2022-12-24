#include <bits/stdc++.h>
using namespace std;

void upper(string *s){
	for(int i=0; i<=(*s).size(); i++){
		if((*s)[i]>='a' && (*s)[i]<= 'z') (*s)[i]-=32;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n;
		cin >> n;
		int dem=0;
		//vector<string> v;
		sort(s.begin(), s.end());
		for(int i=0; i<s.size()-1; i++){
			for(int j=i+1; j<s.size(); j++){
				while(s[j]=s[i]){
					dem++;
				}
				i=j+1;
				break;
			}
		}
		/*if(dem==n) cout << "1" << endl;
		else cout << "0" << endl;*/
		cout << dem << endl;
	}
}
