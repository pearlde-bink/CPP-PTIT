#include <iostream>

using namespace std;

int x(int a, int m){
	for(int i=1; i<m; i++){
		if((a*i)%m==1) return i;
	}
	return 0;
}

int main()
{
   int t;
   cin >> t;
   while(t--){
       int a, m;
       cin >> a >> m;
       if(a>100 || a<1 && m>100 || m<1) return 0;
       else {
	       cout << x(a, m);
	       cout << endl;
		}
   }
}
