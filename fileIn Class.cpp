//cach 1:
/*#include<fstream>
#include<iostream>
using namespace std;

int main(){
	char data[100];
	fstream outfile;
	outfile.open("bink's file", ios::out | ios::binary);
	// hoac fstream outfile("bink's file", ios::out | ios::binary);
	
	cout << "Enter your name: ";
	cin.getline(data, 100);
	outfile << data << endl;
	
	cout << "Enter your age: ";
	cin >> data;;
	//cin.ignore();
	outfile << data << endl;
	
	outfile.close();
	
	ifstream infile;
	infile.open("bink's file");
	
	cout << "Extracted information : " << endl;
	
	infile >> data;
	cout << data << endl;
	
	infile >> data;
	cout << data << endl;
	
	infile.close();
	
	return 0;
}*/

//cach 2:
#include<fstream>
#include<iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	fstream f;
	
	f.open("bink's file", ios::out | ios::binary);
	f.write(&c, sizeof(c));
	//if type of c is int , we need to "ep kieu" : f.write(reinterpret_cast<char *>(&c), sizeof(c));
	//if c is an array, eg: char c[5]={1, 2, 3, 4, 5} when reinterprete we dont need "&c" just "c"
	f.close();
	
	f.open("bink's file", ios::out | ios::binary);
	f.read(&c, sizeof(c));
	//if type of c is int , we need to "ep kieu" : f.write(reinterpret_cast<char *>(&c), sizeof(c));
	//if c is an array, eg: char c[5]={1, 2, 3, 4, 5} when reinterprete we dont need "&c" just "c"
	cout << "Ki tu duoc in ra la: " << c;
	
	f.close();
}
