#include "heder.h"
void Find (string text, char test){
	int issame = 0;
        int size; size = text.size();
        for (auto c : text){
		for (char k : test){
			if (c == k){
				cout << "\nc="<< c << 
					"\nk=" << k;
                        	issame++;
                	}
		}
        }
        cout << "this is issame [" << issame << "]\n";
}
int main (){
	string text;
	int size = 10; char *test[size];
	while (true){
		cout << "Enter the text\n$";
		getline(cin, text);
		cout << "Enter the test\n$";
		cin.get(test, size);
		Find(text, test);
	}
	return 0;
}

