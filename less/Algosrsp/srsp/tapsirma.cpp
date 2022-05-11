#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
	string str;
	char ch;
	ifstream fin("Read.txt");
	//fstream fai("Read.dat", ios::app | ios::in);
	if (fai.is_open()) cout << "File is open\n";
	else cout << "File is not open!!!\n";
	while (!fin.eof()){
		fin.getline(str, 1000);
                cout << ch << endl;
        }
	fin.close();
	return 0;
}
