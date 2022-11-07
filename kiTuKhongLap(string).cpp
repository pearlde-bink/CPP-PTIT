#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string s;
        cin >> s;
        int dem[100]={0};
        for(int i=0; i<s.size(); i++){
        	dem[s[i]]++;
		}
		for(int i=0; i<s.size(); i++){
        	if(dem[s[i]]>1){
        		s.erase(i,1);
        		i--;
			}
		}
		for(int i=0; i<s.size(); i++){
        	cout << s[i];
		}
		cout <<endl;
    }
}
