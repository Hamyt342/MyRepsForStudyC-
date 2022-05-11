#include <iostream>
using namespace std;
void Probelsiz(char *text, int size){
	char tmp[size], ch;
	int counter = 0, pcount = 0;
	for (size_t i = 0; i < size; ++i){
		ch = text[i];
		if (ch != ' '){
			tmp[counter] = text[i];
			counter++;
		} else pcount++;
	}
	cout << "Probelsiz text: " << tmp << 
		"\nOshirilden probelder ->" << pcount << "<-\n";
	pcount = 0;
}
int main(){
	int size = 256;
	char text[size];
	while (true){
		cout << "\nText jaz\n$";
		cin.get();
		cin.get(text, size);
		cout << "\t\nSenin textin: " << text << endl;
		Probelsiz(text, size);
	}
}
