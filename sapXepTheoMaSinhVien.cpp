#include<bits/stdc++.h> 
using namespace std; 

struct Svien{ 
    string lop,name,msv,mail;
}; 

bool dcm(Svien a, Svien b){ 
    return a.msv < b.msv;
}

void nhap(Svien &a){ 
    getline(cin, a.name); 
    getline(cin, a.lop); 
    getline(cin, a.mail); 
} 

void in(Svien s){ 
    cout << s.msv << " " << s.name << " " << s.lop << " " << s.mail << endl;
}

int main() { 
    Svien a[10001]; 
   // vector<Svien> v; 
    int d = 0; 
    while( getline(cin, a[d].msv )){
        nhap(a[d]); 
        d++;
    }
    sort(a,a+d,dcm); 
    for(int i=0; i<d;i++){ 
        in(a[i]);
    }
    return 0;
}
