#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long int a = -10000000000000;
        vector<int> v(n, 0);
        long long int min1 = 0;
        long long int now = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            now += v[i];
            a = max(a, now - min1);
            min1 = min(min1, now);
        }
        cout << a << "\n";
    }
    return 0;
}
