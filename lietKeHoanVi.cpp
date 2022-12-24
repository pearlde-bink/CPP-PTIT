/*
#include<bits/stdc++.h>
using namespace std;

int n, oke=1;
int s[20];

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		s[i]=i;
	}
}

void hvi(void){
	int j=n-1;
	while(j>0 && s[j]>s[j+1]) j--;
	if(j>0){
		int k=n;
		while(s[k]<s[j] && s[k]>0) k--;
		int tmp;
		tmp=s[k];
		s[k]=s[j];
		s[j]=tmp;
		int r=j+1, t=n;
		while(r<=t){
			int doi=s[r];
			s[r]=s[t];
			s[t]=doi;
			r++; t--;
		}
	}
	else oke=0;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		nhap();
		while(oke){
			for(int i=1; i<=n; i++){
				cout << s[i];
			}
			cout << " ";
			hvi();
		}
		cout << endl;
	}
}
*/
#include<bits/stdc++.h> 
using namespace std; 
int main() { 
	int test; 
	cin >> test;
	while(test--){ 
		int n; 
		cin >> n; 
		int a[n+5]; 
		for(int i=1;i<=n;i++) a[i] = i; 
		do { 
			for(int i=1;i<=n;i++) cout << a[i]; 
			cout << " ";
		}
		while(next_permutation(a+1,a+n+1)); 
		cout << endl;
	} 
	return 0;
}
