#include<iostream>

using namespace std;

long long ucln(long long x, long long y){
	if(x%y==0) return y;
	return ucln(y, x%y);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	long long a;
  	cin >> a;
  	int n=1;
  	for(int i=2; i<=a; i++){
  		n=(n*i)/ucln(n, i);
	}
	cout << n << endl;
  }
}

