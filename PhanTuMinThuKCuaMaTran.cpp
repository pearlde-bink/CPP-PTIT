#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n,k;
		cin >> n >> k;
		int a[n][n];
		vector<int> v;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(), v.end());
		cout << v[k-1] << endl;
	}
}

/*
int n;
cin >> n;
int a[n*n];
for(in ti=0; i<n*n; i++){
	cin >> a[i];
}
sort(a, a+n*n);
cout << a[k-1]  << endl;
*/
/*
1
4 7
10 20 30 40
15 25 35 45
24 29 37 48
32 33 39 50
*/
