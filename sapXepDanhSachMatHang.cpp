#include <bits/stdc++.h>
using namespace std;

struct matHang{
	int stt;
	string ten;
	string nhom;
	double profit;
};

bool rvs(matHang a, matHang b){
	return a.profit>b.profit;
}
 
int main(){
	int n;
	cin >> n;
	double mua, ban;
	vector<matHang> a(n);
    for(int i=0; i<n; i++){
    	cin.ignore();
    	a[i].stt=i+1;
    	getline(cin, a[i].ten);
    	getline(cin, a[i].nhom);
    	cin >> mua >> ban;
    	a[i].profit=ban-mua;
	}
	sort(a.begin(), a.end(), rvs);
	for(int i=0;i<n;i++){
        cout << a[i].stt << " " << a[i].ten << " " << a[i].nhom;
        cout <<" " << fixed << setprecision(2) << a[i].profit << endl;
    }
    return 0;
}
