#include<bits/stdc++.h>
using namespace std;

int i=1;

string caps(string s){
	stringstream ss(s);
	string res="";
	string tmp;
	while(ss>>tmp){
		res+=toupper(tmp[0]);
	}
	return res;
}

string ten(string s){
	stringstream ss(s);
	vector<string> v;
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	return v.back();
}

class GiaoVien{
	public:
		string ord="GV";
		string name, sub;
		friend istream &operator >> (istream &input, GiaoVien &a){
			scanf("\n");
			getline(cin, a.name);
			getline(cin, a.sub);
			if(i<10) a.ord+="0"+to_string(i);
			else a.ord+=to_string(i);
			i++;
			a.sub=caps(a.sub);
			return input;
		}
		friend ostream &operator << (ostream &output, GiaoVien a){
			cout << a.ord << " " << a.name << " " << a.sub << endl;
			return output;
		}
		friend bool operator < (GiaoVien a, GiaoVien b){
			if(ten(a.name)==ten(b.name)) return a.ord > b.ord;
			return ten(a.name) > ten(b.name);
		}
};

void sapxep(GiaoVien a[], int n){
	sort(a, a+n);
	reverse(a, a+n);
}

int main(){
	int n; 
	cin >> n;
	GiaoVien ds[n];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	sapxep(ds, n);
	for(int i=0; i<n; i++){
		cout << ds[i];
	}
}
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dinh Minh Tuan
An toan thong tin
*/
