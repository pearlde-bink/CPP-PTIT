//cach1 khong toi uu lam
/*
#include<bits/stdc++.h>
using namespace std;
bool nto(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		cout << "1" << " ";
		for(int i=2; i<=n; i++){
			if(i==3) cout << i << " ";
			else if(i%2==0) cout << "2" << " ";
			else if(nto(i)) cout << i << " ";
			else if(i%2!=0 && i%3==0) cout << "3" << " ";
			else if(i%2!=0 && i%5==0) cout << "5" << " ";
		}
		cout << endl;
	}
}
*/

//cach2
#include<bits/stdc++.h>
using namespace std;
void uoc(int n){
	for(int i=2; i<=n; i++){
		if(n%i==0){
			cout << i << " ";
			break;
		}
	}
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		cout << "1" << " ";
		for(int i=2; i<=n; i++){
			uoc(i);
		}
		cout << endl;
	}
}
