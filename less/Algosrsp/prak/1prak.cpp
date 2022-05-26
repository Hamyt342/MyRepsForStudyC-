#include <iostream>
#include <fstream>
#include <string>
#define SIZE 10
using namespace std;
int main(){
	ifstream fin("mass.txt");
	int amass[SIZE], num, i = 0, z = 0;
	char c;
	if (!fin.is_open()) cout << "Errer\n";
	while (!fin.eof()){
		fin.get(c);
		//cout << c << endl;
		if (c != ','){
			cout << c << ' ' << (int)c << endl;
			num = (int)c;
			amass[i] = num;
			i++;
			cout << amass[i];
		}
	}
	for (int i = 0; i < SIZE; i++){
		cout << amass[i] << ' ';
	}
	for (int i = 0; i < SIZE; i++){
		z += amass[i];
	}
	cout << "Eki jiimnin toliq summasi = " << z;
	return 0;
}
