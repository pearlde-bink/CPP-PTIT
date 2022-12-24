#include<bits/stdc++.h>
using namespace std;
int n,a[100];
bool oke=true;

void begin(void){
	cin >> n;
}

void fin(void){
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
}

void next(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) fin();
		else next(i+1);
	}
}

int main(){
	begin();
	next(1);
}
