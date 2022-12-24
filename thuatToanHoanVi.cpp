#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int a[100];
		for(int i=1; i<=100; i++){
			a[i]=i;
		}
		for(int i=1; i<=n; i++){
			while(a[i-1]>a[i] && i<=n){
				cout << a[i] << " ";
				i++;
			}
		}
	}
}
