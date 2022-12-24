/*#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
		string s;
		//getline(cin,s);
		cin >> s;
		int dem=1;
		for(int i=0; i<s.size(); i++){
			if(s[i+1]==s[i]) dem++;
			else{
				cout << s[i] << dem;
				dem=1;
			}
		}
		cout << endl;
	}
}
*/
#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
		string s;
		cin >> s;
		int dem=1;
		for(int i=0; i<s.size(); i++){
			for(int j=i+1; j<=s.size(); j++){
				if(s[j]==s[i]) dem++;
				else{
					cout << s[i] << dem;
					dem=1;
				}
			break;
			}
		}
		cout << endl;
	}
}

