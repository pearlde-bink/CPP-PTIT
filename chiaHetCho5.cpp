#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		long long n=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1') n=(2*n+1)%5;
			else n=(2*n)%5;
		}
		if (n==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
