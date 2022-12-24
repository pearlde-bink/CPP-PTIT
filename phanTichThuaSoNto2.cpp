#include<iostream>

using namespace std;

int dem[1000];
int main() {
	int a;
	cin >> a;
	int b=a;
	for(int i=0; i<=b; i++) dem[i]=0;
	for(int i=2; i<=b; i++){
		while(b%i==0){
			dem[i]++;
			b/=i;
		}
	}
	for(int i=0; i<=a; i++){
		if(dem[i]){
			cout << i << " " << dem[i] << endl;
		}
	}
}
