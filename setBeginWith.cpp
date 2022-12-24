#include<bits/stdc++.h>

using namespace std;

int main(){
	set<int> s;
	int a[7]={1, 3, 1, 4, 6 ,3 ,7 };
	for(int i=0; i<7; i++){
		s.insert(a[i]);
	}
	cout << s.size() << endl;
//	s.clear(); //xoa het phan tu trong set
	if(s.empty()){
		cout << "Rong" << endl;
	}
	
	for( int x : s){
		cout << x << " ";
	}
	cout << endl;
	
	s.insert(2);
	
	for( int x : s){
		cout << x << " ";
	}
	cout << endl;
	//in cac phan tu trong set bang iterator
	/* for(set<int>::iterator it = s.begin(); it!=s.end(); it++){
		cout << *it << " ";
	} */
	/* for(auto it = s.begin(); it!=s.end(); it++){
		cout << *it << " ";
	} */
	cout << *s.begin() << endl; //in ptu dau tien
	//in ptu cuoi cung
	auto it=s.end();
	--it;
	cout << *it << endl;
	// cach 2 : cout << *(--s.end()) << endl;
	//cach 3 : cout << *s.rbegin() << endl;
	
	if(s.find(3) != s.end()) cout << "FOund" << endl;
	else cout << "NONE" << endl;
	
	cout << s.count(3)<< endl;
	
	s.erase(2);
	cout << s.size() << endl;
	
}
