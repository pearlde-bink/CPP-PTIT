#include <bits/stdc++.h>
using namespace std;

int main()
{
    int **a;
    const int length=3;
    a=new int*[length];
    for(int i=0; i<length; i++){
        a[i]=new int[length];
    }
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<length; i++){
        delete []a[i];
    }
    delete []a;
}
