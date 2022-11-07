#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int k; 
    cin >> k; 
    while(k--){ 
        int N,count=0,h=0; 
        cin >> N; 
        int A[N]; 
        for(int i=0;i<N;i++){ 
            cin >> A[i];
        } 
        sort(A,A+N); 
        for(int i=0;i<N;i++){ 
            if(A[i]==A[i+1] && A[i+1]!=A[i+2]){ 
                h++;
            } 
            if(A[i]==A[i+1]){ 
                count++; 
            }
        } 
        cout << h+count << endl;
        } 
    return 0;
}
