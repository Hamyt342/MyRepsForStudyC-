#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ofstream fout("text.txt");
	//string str;
	char str[100];
	int iter = 1;
	while (iter){
		cout << "vvedi straku\n$";
		//cin.getline(cin, fout);
		cin.get();
		cin.get(str, 100);
		fout << str << endl;
		cout << "Exit? 1=n 0=y\n";
		cin >> iter;
	}

}
