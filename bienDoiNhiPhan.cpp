#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int c[100]={0};
    int b[100]={0};
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                if(a[i][j]==1){
                	c[i]=1;
                	b[j]=1;
				}
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(c[i] || b[j]) cout << "1 ";
                else cout << "0 ";
            }
        cout << endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}
