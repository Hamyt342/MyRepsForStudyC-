#include <iostream>
#define size 64
using namespace std;
int main(){
	int count = 1, probel = 0;
	char text[size];
	while (true){
		cout << "matindi engiz: "; cin.get(text, size);
		for (auto ch:text){
			if (ch == ' ' && probel == 0){
				count++;
				probel++;
			} else if (ch != ' ' && probel > 0){
				probel = 0;
			}
		}
		cin.get();
		cout << "Byl matinde [" << count << "] soz bar\n";
		count = 1;
	}
	return 0;
}
