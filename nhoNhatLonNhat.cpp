#include <bits/stdc++.h>
using namespace std;

//cach1 
/*
int check(int a){
	int dem=0;
	int i=a;
	while(i>0){
		dem+=(i%10);
		i/=10;
	}
	return dem;
}

int main(){ 
    int m,s;
    cin >> m >>s;
    vector<int> v;
    for(int i=pow(10,m-1); i<=pow(10,m)-1; i++){
    	if(check(i)==s) v.push_back(i);
	}
	cout << v.front() << " " << v.back();
}
*/

//cach2 hoi tricky xíu

void min(int m, int s){
	s-=1;
	vector<int> v(m);
	for(int i=m-1; i>0; i--){
		if(s>9){
			v[i]=9;
			s-=9;
		}
		else{
			v[i]=s;
			s=0;
		}
	}
	v[0]=s+1;
	for(int x:v) cout << x;
}
void max(int m, int s){
	vector<int> v(m);
	for(int i=0; i<m; i++){
		if(s>9){
			v[i]=9;
			s-=9;
		}
		else{
			v[i]=s;
			s=0;
		}
	}
	for(int x:v) cout << x;
}

int main(){ 
    int m,s;
    cin >> m >>s;
    if(s>m*9||(s==0 && m>1)) cout << "-1 -1";
    else {
    	min(m,s);
    	cout << " ";
    	max(m,s);
	}
}
