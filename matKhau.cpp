#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int res = 0;
    vector<string> v(n, "");
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    } 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        	if(j!=i){
	            if (v[i].find(v[j]) != string::npos) ++res;
			}
        }
    }
    cout << res;
    return 0;
}

//::npos means not found ~ NULL
