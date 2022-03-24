#include <iostream>
using namespace std;
int main (){
	int size, d, k = 0;
	cout << "How match have elements a arrey\n€";
	cin >> size;
	cin.get();
	char obj[size], e;
	for (int i = 0; i < size; ++i){
		if (i < size){
			obj[i] = ' ';
		} else {
			obj[i] = '\0';
		}
	}
	cout << "Enter samothing\n£";
	cin.get(obj, size);
	cout << "This is string: " << obj << "\nThis is itereted characters: ";
	for (char e: obj){
		cout << e << " ";
	}
	for (int i = 0; i < size; ++i){
		e = obj[i];
		if (e != ' '){
			k = 0;
		} else {
			if (k = 0){
				d = i;
			}
			k++;
		}
	}
	cout << "\n";
}
