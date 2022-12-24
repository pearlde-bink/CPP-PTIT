/*#include<bits/stdc++.h>
using namespace std;

int chiaNho(int n){
	int dem=0;
	while(n>0){
		dem+=n%10;
		n/=10;
	}
	if(dem>9){
		chiaNho(dem);
	}
	else return dem;
	return dem;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		if(chiaNho(n)%9==0) cout << "1" << endl;
		else cout << "0" << endl;
	}
}*/

#include<bits/stdc++.h>
using namespace std;

int chiaNho(string s){
	int dem=0;
	for(int i=0; i<s.size(); i++){
		dem+=s[i]-'0';
	}
	if(dem<10) return dem;
	return chiaNho(to_string(dem));
}

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--){
		string s;
		cin >> s;
		if(chiaNho(s)==9) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
