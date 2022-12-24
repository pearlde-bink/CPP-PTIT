#include<bits/stdc++.h>
using namespace std;

    
struct ThiSinh{
	string ten;
	string bday;
	float sub1, sub2, sub3;
};

void nhap(ThiSinh &ts){
	getline(cin, ts.ten);
	getline(cin, ts.bday);
	cin >> ts.sub1 >> ts.sub2 >> ts.sub3; 
}

void in(ThiSinh ts){
	cout << ts.ten << " ";
	cout << ts.bday << " ";
	cout << fixed << setprecision(1) << ts.sub1 + ts.sub2 + ts.sub3 << " ";
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
