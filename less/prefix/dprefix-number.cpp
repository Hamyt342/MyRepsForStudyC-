#include <iostream>
#include <fstream>
//#include <chrono>
using namespace std;
//using namespace chrono;
int main() {
	//auto startf = chrono::high_resolution_clock::now();
	ofstream fio("Prefix.txt", ios::app | ios::in);
	if (fio.is_open()) cout << "All is ok my master file is open!!!)\n";
	else		   cout << "File is not found my master(\n";
	int size, Q, u = 10000;
	cout << "Enter size of arrey\n$"; cin >> size;
	unsigned long long pref[size], k = 1;
        for (int i = 0; i < size; i++){
                pref[i] = k;
                k++;
        }
	cout << "This is prefix arrey:\n";
        for (int i = 0; i < size; i++){
                if (i < size-1) cout << pref[i] << ", ";
		else            cout << pref[i] << ".\n";
		if (i < size-1) fio << pref[i] << ", ";
		else            fio << pref[i] << ".\n\n";
        }
        cout << "\nEnter the step[Q]\n$"; cin >> Q;
	for (int f = 1; f <= Q; ++f){
		fio << "[" << f << "] :";
		for (int i = 0; i < size; i++){
			if (i != 0)	pref[i] = pref[i-1] + pref[i];
			else 		pref[i] = pref[i];
			if (i < size-1)	fio << pref[i] << ", ";
			else 		fio << pref[i] << ".\n\n";
		}
		if (f/u == 1) {
			cout << f << "-iter\n";
			u+=10000;
		}
	}
	fio.close();
	//auto endf = chrono::high_resolution_clock::now();
	//duration<double> duration = endf - startf;
	//cout << "Duration :"<< duration.count() << "s\n";
}

