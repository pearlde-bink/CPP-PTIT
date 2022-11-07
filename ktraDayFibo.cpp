/*#include<bits/stdc++.h>

using namespace std;

long long fibonacci(int n){
	if (n == 1 || n == 2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main (){
  	int t;
  	cin >> t;
  	while (t--){
      	int n;
     	cin >> n;
      	int a[n];
      	for(int i=0; i<n; i++){
      		cin >> a[i];
		}
      	for(int i=0; i<n; i++){
      		if(fibonacci(a[i])) cout << a[i] << " ";	
		}
		cout << endl;
	}
}*/
#include<bits/stdc++.h>

using namespace std;

long long fibo[94];

void fibonacci(){
	fibo[0]=0; 
	fibo[1]=1;
	for(int i=2; i<=93; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

bool check(long long n){
	for(int i=0; i<=93; i++){
		if(fibo[i]==n) return 1;
	}
	return 0;
}

int main(){
	fibonacci();
	int t; 
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int a[n];
      	for(int i=0; i<n; i++){
      		cin >> a[i];
		}
      	for(int i=0; i<n; i++){
      		if(check(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}

