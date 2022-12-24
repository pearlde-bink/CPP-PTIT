#include<bits/stdc++.h>
using namespace std;
int n,k, dem=0;
bool oke=true;
string a;

void next(void){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]){
		i--;
	}
	if(i>0){
		k=n;
		while(a[i]>a[k]) k--;
		int tmp;
		tmp=a[i];
		a[i]=a[k];
		a[k]=a[i];
		int r=i+1, s=n;
		while(r<s){
			tmp=r;
			r=s;
			s=tmp;
			r++;
			s--;
		}
	}
	else oke=false;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        a[i]=i;        
    }
    while(oke){
    	for(int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        next();
    }
    return 0;
}
