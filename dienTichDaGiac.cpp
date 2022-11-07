/*#include<bits/stdc++.h>
using namespace std;

struct data{
	int x,y;
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		struct data a[n];
		for(int i=0;i<n;i++) cin >> a[i].x >> a[i].y;
		float dem1=0, dem2=0;
		for(int i=0;i<n-1;i++){
			dem1+=a[i].x*a[i+1].y;
			dem2+=a[i].y*a[i+1].x;
		}
		cout << fixed << setprecision(3) << (dem1+dem2)*0.5 << endl;;
	}
}*/

#include<bits/stdc++.h>
using namespace std;
struct toado{
	double x;
	double y;
};
double dientich(toado a,toado b,toado c){
	return 0.5*abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		double S=0;
		struct toado a[n];
		for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
		for(int i=1;i<=n-2;i++){
			S += dientich(a[0],a[i],a[i+1]);
		}
		cout << fixed << setprecision(3) << S << endl;
	}
}
