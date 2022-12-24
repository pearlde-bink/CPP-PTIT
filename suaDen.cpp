#include<bits/stdc++.h>
using namespace std;

int main(){
    // n den tat ca
   	// b den hong 
   	// k den lien tiep
    int k, n, b;
    cin >> n >> k >> b;
    int a[100001]={0};
    for(int i=0; i<b; i++){
        int x; cin >> x;
        a[x]=1;
    }
    int dem=0;
    for(int i=1; i<=k; i++){
    	if(a[i]==1) dem++;
	}
	int ans=dem;
	for(int i=k+1; i<=n; i++){
		dem = dem - a[i-k] + a[i];
		ans = min(ans, dem);
	}
	cout << ans << endl;
}
