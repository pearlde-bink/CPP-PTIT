/*Cho mang A[] gom n so nguyên duong. Goi L, R là max và min các phan tu cua A[].
Nhiem vu cua ban là tìm so phan tu con thieu can thêm vào mang de mang có day du các so trong khoang [L, R].
Ví du A[] = {5, 7, 9, 3, 6, 2 } ta nhan duoc ket qua là 2 tuong ung voi các so còn thieu là 4, 8.*/

#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int dem=0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            while (a[i + 1] - a[i] != 1) {
                dem+=1;
                a[i]+=1;
            }
        }
        cout << dem << endl;
    }
}

