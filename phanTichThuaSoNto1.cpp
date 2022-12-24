#include <iostream>

using namespace std;

//cachBinhThuong
/* int main()
{
    int t;
    cin >> t;
    while(t--){
    	int a;
    	cin >> a;
    	int dem;
    	for(int i=2; i<=a; i++){
    		dem=0;
    		while(a%i==0){
    			dem++;
    			a/=i;
			}
			if(dem>=1){
				cout << i << " " << dem;
				if(a>1) cout << " ";
			}
		}
		cout  << endl;
	}
} */

//cachDungMang

int dem[1000];
int main() {
	int t;
	cin >> t; 
	while(t--){
		int a;
		cin >> a;
		int b=a;
		for(int i=0; i<=b; i++) dem[i]=0;
		for(int i=2; i<=b; i++){
			while(b%i==0){
				dem[i]++;
				b/=i;
			}
		}
		for(int i=0; i<=a; i++){
			if(dem[i]){
				cout << i << " " << dem[i] << " ";
			}
			cout << endl;
		}
	}
}
