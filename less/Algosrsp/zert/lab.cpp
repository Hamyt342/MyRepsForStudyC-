#include <iostream>
#include <fstream>
using namespace std;
int main (){
	int iter = 5;
	int san;
	ofstream jup("jup.txt");
	ofstream taq("taq.txt");
	while (iter){
		cout << "San jaz\n$";
		cin >> san;
		if (san%2 == 0){
			jup << san << endl;
		} else if (san%2 == 1){
			taq << san << endl;
		}
		iter--;
	}
	jup.close();
	taq.close();
	return 0;
}
