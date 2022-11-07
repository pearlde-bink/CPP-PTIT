#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int w;
    w=*a;
    a=b;
    *b=w;
}

int main(){
    int a, b;
    cout << "Before swapping: ";
    cin >> a >> b;
    swap(a,b);
    cout << "After swapping: ";
    cout << a << " " << b;
}
