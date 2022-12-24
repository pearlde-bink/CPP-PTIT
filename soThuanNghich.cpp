#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
		long long a;
		cin >> a;
		long long b=a;
		long long dao=0;
		while(a>0){
			dao = dao*10 + a%10;
			a/=10;
		}
		if(dao==b) cout << "YES" << endl;
		else cout << "NO" << endl;
		t--;
	}
}
/*
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int dem=0;
		for(int i=0; i<a.size(); i++){
		    if(a[i]==a[a.size()-i-1]) dem++;
		}
		if(dem==a.size()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
*/

