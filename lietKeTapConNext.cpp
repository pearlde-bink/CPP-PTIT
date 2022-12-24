/*
#include<bits/stdc++.h>
using namespace std;
int n,k;
bool oke=true;
int b[100];

void Init(void){
    cin >> n >> k;
    for(int i=1; i<=k; i++){
        b[i]=i;
    }
}

void Result(void){
    for(int i=1; i<=k; i++){
        cout << b[i];
    }
    cout << " ";
}

void next(void){
    int i=k;
    while(i>0 && b[i]==n-k+i){
        i--;
    }
    if(i>0){
        b[i]=b[i]+1;
        for(int j=i+1; j<=k; j++){
            b[j]=b[i]+j-i;
        }    
    }
    else oke = false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
	    for(int i=1; i<=k; i++){
	        b[i]=i;        
	    }
	    //Init();
	    while(oke){
	        for(int i=1; i<=k; i++){
	            cout << b[i];
	        }
	        cout << " ";
	        //Result();
	        next();
	    }
		cout << endl;	
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int n,k;
bool oke=true;
int b[100];

void Init(void){
	cin >> n >> k;
	b[0]=0;
}
void Result(void){
	for(int i=1; i<=k; i++){
		cout << b[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j=b[i-1]+1; j<=n-k+i; j++){
		b[i]=j;
		if(i==k) Result();
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		Try(1);
	cout << endl;
	}
}

