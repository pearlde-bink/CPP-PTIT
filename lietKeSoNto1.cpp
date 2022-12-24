
#include <iostream>
#include <math.h>

using namespace std;

int nto(long a){
    for(int i=2; i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
    long a, b;
    cin >> a >> b;
    for(long i=a; i<=b; i++){
    	if(nto(i)) cout << i << " ";
	}
}
