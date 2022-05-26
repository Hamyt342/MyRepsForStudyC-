#include <iostream>
#include <string>
#define SIZE 10
using namespace std;
int main(){
	int bmass[SIZE],  amass[SIZE], k = 1, i = 0, z = 0;
	char c;
	for (int i = 0; i < SIZE; i++){
		amass[i] = k;
		bmass[i] = k++;
	}
	for (int i = 0; i < SIZE; i++){
		z += amass[i];
		z += bmass[i];
	}
	cout << "Byl a jiim\n";
	for (int i = 0; i < SIZE; i++){
		cout << amass[i] << ' ';
	}
	cout << endl << "Byl b jiim\n";
	for (int i = 0; i < SIZE; i++){
                cout << bmass[i] << ' ';
        }
	cout << "\nEki jiimnin toliq summasi = " << z << endl;
	return 0;
}
