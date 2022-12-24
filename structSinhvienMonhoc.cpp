#include<bits/stdc++.h>
using namespace std;

struct Subject{
	string mmh ;
	string subname;
	int tc;
	float cc, kt, thi;
};

struct SinhVien{
	string msv;
	string ten;
	string lop;
	Subject *dki;
	int k;
	float tbc;
};

void nhap(SinhVien &sv, Subject &sj, int M, int N){
	vector<string> v;
	for(int i=0; i<N; i++){
		getline(cin, sj.mmh);
		v_pushback(sj.mmh)
		getline(cin, sj.dki.subname);
		cin >> sj.dki.tc;
		cin >> sj.dki.cc >> sj.dki.kt >> sj.dki.thi;
	}
	for(int i=0; i<v.size(); i++){
		if(sj[i].mmh==v[i]){
			for(int i=0; i<M; i++){
				getline(cin, sv[i].msv);
				getline(cin, sv[i].ten);
				getline(cin, sv[i].lop);
				for(int j=0; j<k; j++){
					int sumtc;
					float sumsj;
					getline(cin, sj[j].dki.subname);
					cin >> sj[j].dki.tc;
					cin >> sj[j].dki.cc >> sj[j].dki.kt >> sj[j].dki.thi;
					sumsj += (sj[j].dki.cc*10/100 + sj[j].dki.kt*20/100 + sj[j].dki.thi*70/100)*sj[j].dki.tc;
					sumtc += sj[j].dki.tc;
				}
			}
		}
	}
	tbc=sumsj/sumtc;
}

void in(SinhVien sv, Subject sj, int M , int N){
	for(int i=0; i<M; i++){
		cout << sv[i].msv << " ";
		cout << sv[i].ten << " ";
		cout << sv[i].lop << " ";
		cout << fixed << setprecision(2) << tbc;
		/*for(int i=0; i<N; i++){
			cout << sj.dki.mmh;
			cout << sj.dki.subname;
			cout << sj.dki.tc;
			cout << fixed << setprecision(2) << sj.dki.cc*10/100 + sj.dki.kt*20/100 + sj.dki.thi*70/100;	
		}*/
	}
}

int main(){
    struct SinhVien a;
    struct Subject b;
    int N, M;
    cin >> N >> M;
    nhap(a, b);
    in(a);
    return 0;
}
