#include "heder.h"
void Find (string text, string test){
	int issame = 0, i = 0, j = 0;
        for (auto c : text){
		for (auto k : test){
			if (c == k){
				cout << "\nIteration j = [" << j <<
					"] Iteration i = [" << i <<
					"]\nc = [" << c << 
					"] k = [" << k << "] [" <<
					k << " = " << c << "]\n";
				issame++;
                	}
			j+=1;
		}
		i+=1;
        }
        cout << "\nthis is find of [" << issame << "]-times\n";
}
int main (){
	int size = 10; 
	string test, text;
	while (true){
		cout << "\nEnter the text\n$";
		getline(cin, text);
		cout << "Enter the test\n$";
		getline(cin, test);
		Find(text, test);
	}
	return 0;
}

