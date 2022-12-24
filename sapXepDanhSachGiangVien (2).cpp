#include <bits/stdc++.h>
using namespace std;

typedef struct{
	string name, sub, sj, first;
	string mgv="GV";
} gVien;

bool can_swap(gVien a, gVien b){
	if(a.first == b.first) return a.mgv < b.mgv;
	return a.first < b.first;
}

int main(){
	int n;
	cin >> n;
	gVien a[n];
	for(int i=0; i<n; i++){
		scanf("\n");
		getline(cin, a[i].name);
		scanf("\n");
		getline(cin, a[i].sub);
		if(i+1<10){
			a[i].mgv+="0";
			a[i].mgv+=to_string(i+1);
		}
		else a[i].mgv+=to_string(i+1);
		stringstream ss(a[i].sub);
		string token;
		while(ss >> token){
			token[0] = toupper(token[0]);
			a[i].sj+=token[0];
		}
		stringstream ss1(a[i].name);
		while(ss1 >> token){
			a[i].first=token;
		}
	}
	sort(a, a+n, can_swap);
	for(int i=0; i<n; i++){
		cout << a[i].mgv << " " << a[i].name << " " << a[i].sj << endl;
	}
}
