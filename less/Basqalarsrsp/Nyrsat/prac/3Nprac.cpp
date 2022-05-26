#include <iostream>
using namespace std;
int main(){
	int L = 4, M = 1000, N = 4, size = 0, san = 0;
	size = M - L + 1;
	cout << size << endl;
	int sandar[size];
	for (int i = 0; i < size; i++){
		sandar[i] = N;
		N++;
	}
	for (int i = 0; i < size; i++){
                cout << sandar[i] << ' ';
	}
	for (int i = 0; i < size; i++){
		san = sandar[i];
		if(san % 7 == 0 && san % 5 == 0){
			cout << san << " byl san 7 jane 5 ke qaldiqsiz bolinedi\n";
		}
	}
	return 0;
}
