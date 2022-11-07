#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *a= new int[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    cout << "Before" << endl;
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    delete []a;
    
    cout << endl << "After", << endl;
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
}
