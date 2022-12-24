#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
	    long a,b,c;
		cin >> a >> b >> c;
		long long A[a], B[b], C[c];
		for(int i=0; i<a; i++) cin >> A[i];
		for(int i=0; i<b; i++) cin >> B[i];
		for(int i=0; i<c; i++) cin >> C[i];
		
		vector<long long> v;
		for(int i=0; i<a; i++){
		    v.push_back(A[i]);
		}
		for(int i=0; i<b; i++){
		    v.push_back(B[i]);
		}
		for(int i=0; i<c; i++){
		    v.push_back(C[i]);
		}
		
		sort(v.begin(), v.end());
		for(int i=v[0]; i<v.size()-1; i++){
		    if(v[i+1]==v[i] && v[i+2]!=v[i+1]) {
		       	cout << v[i+1] << " ";
	   		}
		}
		cout << endl;
	}
}
//cach2
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		long long a1[n],a2[m],a3[k];
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		for(int i=0;i<k;i++) cin>>a3[i];
		int i=0,j=0,h=0;
		vector <long long> a;
		while(i<n&&j<m&&h<k){
			if(a1[i]==a2[j]&&a2[j]==a3[h]){
				a.push_back(a1[i]);
				i++;
				j++;
				h++;
			}
			else if(a1[i]<a2[j]) i++;
			else if(a2[j]<a3[h]) j++;
			else h++;
		}
		if(a.size()==0) cout<<-1<<endl;
		else{
			for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
			cout<<endl;
		}
	}
}
