#include "heder.h"
int main (){
	int issame;
	string text;
	char test;
	cout << "Enter the text\n$";
	getline(cin, text);
	cout << "Enter the test\n$";
	cin >> test;
	int size; size = text.size();
	for (auto c : text){
		if (c == test){
			issame++;
		}
	}
	cout << "this is issame [" << issame << "]\n";
	return 0;
}

