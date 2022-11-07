#include <bits/stdc++.h>

using namespace std;

int(*f_function)(int a, int b);

int sum(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int main()
{
    f_function=&sum;
    int a,b;
    cin >> a>> b;
    cout << f_function(a,b);
}
