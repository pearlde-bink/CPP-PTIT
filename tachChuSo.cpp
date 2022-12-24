#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		cin.ignore();
		string s;
		cin >> s;
		int tmp;
		int demso=0;
		int k=0;
		for(int i=0; i<s.size()-1; i++){
			for(int j=i+1; j<s.size(); j++){
				if(s[j]<s[i]){
					tmp=s[i];
					s[i]=s[j];
					s[j]=tmp;
				}
			}
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]>='0' && s[i]<='9') demso+=s[i]-'0';
			if(s[i]>='A' && s[i]<='Z'){
				k=i;
				break;
			}
			
		}
		for(int i=k; i<s.size(); i++){
			cout << s[i];
		}
		cout << demso;
		cout << endl;
	}
}
