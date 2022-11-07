
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
    long a;
    cin >> a;
    if(nto(a)) cout << "YES";
    else cout << "NO";
}
