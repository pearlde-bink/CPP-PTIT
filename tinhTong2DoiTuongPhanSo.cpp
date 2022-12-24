#include <bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
		long tu, mau;
	public:
		PhanSo()
	    {
	        tu = 1;
	        mau = 1;
	    }
	    ~PhanSo(){};
		PhanSo(long long tu, long long mau){
	        this->tu = tu;
	        this->mau = mau;
	    }
		friend istream &operator >> (istream &input, PhanSo &p){
			cin >> p.tu >> p.mau;
			return input;
		}
		friend ostream &operator << (ostream &output, PhanSo p){
			cout << p.tu << "/" << p.mau;
			return output;
		}
		PhanSo operator+(PhanSo p); //ham cong giua 2 phan so voi nhau
		//eg: operator+(int ); --> cong voi 1 so int
};
PhanSo PhanSo::operator+(PhanSo p){
	PhanSo ps;
	ps.tu = tu*p.mau + mau*p.tu;
	ps.mau = mau*p.mau;
	long long uc=__gcd(ps.mau, ps.tu);
	ps.mau/=uc;
	ps.tu/=uc;
	return ps;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
