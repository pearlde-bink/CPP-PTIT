#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> mp;
	mp.insert({1,2});
	mp.insert({2,4});
	mp.insert({3,5});
	mp.insert({3,9});
	
	mp[5]=10; //==mp.insert({5, 10});
	mp[2]=100; //==mp.insert({2,100});
	cout << mp.size() << endl;
	cout << mp[2] << endl;
	
	//for each
	for(pair<int, int> x : mp){
		cout << x.first << " " << x.second << endl;
	}
	/*
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	for(map<int, int>::iterator it=mp.begin(); i!=mp.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
		//cout << it-->first << " " << it-->second << endl;
	}
	*/
	//dem tan suat xuat hien cua 1 ptu trong mang
	int a[n]={1, 1, 2, 2, 2, 2, 3, 4, 3, 1};
	for(auto x:mp){
		mp[x]++;
		/*
			mp[1]=3;
			mp[2]=4;
			mp[3]=2;
			m[[4]=1;
		*/
		
	}
}
