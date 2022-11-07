#include <bits/stdc++.h>
using namespace std;

 struct Employ{
    char code[20];
    string name;
    int hs;
    float lcb;
    float pc;
};

void nhap(Employ &n){
		cin >> n.code;
		cin.ignore();
		getline(cin, n.name);
		cin >> n.hs >> n.lcb >> n.pc;
}

void in(Employ n[3]){
	for(int i=0; i<3; i++){
		cout << n[i].code << " " << n[i].name << " "  << n[i].hs * n[i].lcb + n[i].pc << endl;
	} 
}

int main(){
	struct Employ n[3];
	for(int i=0; i<3; i++){
		nhap(n[i]);
	}
	
	fstream file;
	
	file.open("fileNhanVien", ios::out | ios::binary);
	file.write(reinterpret_cast<char *>(&n), sizeof(n));
	file.close();
	
	file.open("fileNhanVien", ios::out | ios::binary);
	file.read(reinterpret_cast<char *>(&n), sizeof(n));
	cout << endl << "File can in la: " << endl;
	in(n);
	
	file.close();
}
