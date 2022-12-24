#include <fstream> 
#include <iostream> 
#include <string> 

using namespace std; 
int main() { 
	string line; 
	ifstream in{"PTIT.in"}; 
	ofstream out{ "PTIT.out" }; 
	while (in >> line){ 
		out << line << endl;
	} 
	in.close(); 
	out.close(); 
	return 0;
}
