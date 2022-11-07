#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	double a1,a2,b1,b2;
    	cin >> a1 >> a2 >> b1 >> b2;
    	if(a1<=1000 && a2<=1000 && b1<=1000 && b2<=1000){
	    	double d=sqrt(pow((b2-a2),2) + pow((b1-a1),2));
	    	cout << fixed << setprecision(4) << d << endl;
		}
	}
}
