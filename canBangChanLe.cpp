#include <iostream>
#include <math.h>
using namespace std;

int cb(int a, int chan, int le){
    chan=0, le=0;
    while(a>0){
        int b=a%10;
        if(b%2==0) chan++;
        else le++;
        a/=10;
    }
    if(chan==le) return 1;
    return 0;
}

int main() {
	int t;
	cin >> t;
	int dem=0;
	int chan=0, le=0;
	for(int i=pow(10, t-1); i<pow(10, t); i++){
		if(cb(i,chan,le)){
			cout << i << " ";
			dem++;
		}
		if(dem==10) {
			cout << endl;
			dem=0;
		}
	}
}
