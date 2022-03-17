#include <iostream>
#define SIZE 3
using namespace std;
int issame = 0;
void find (){
	for (int i = 0; i <= SIZE; i++){
		cout << "\n\nthis is first cicle iter=[" << i << "]";
		for (int j = 0; j <= SIZE; j++){
				cout << "\nthis is second cicle[" << j << ']';
		}
	}
	cout << endl;
}
int main (){
	find();
	return 0;
}

