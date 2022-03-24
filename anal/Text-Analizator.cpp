#include "heder.h"
#define SIZE 16
int issame = 0;
void find (char text[], char test[]){
	//int samecount = 0;
	char simile;
	for (int i = 0; i <= SIZE; i++){
		simile = text[i];
		for (int j = 0; j <= SIZE; j++){
			if (simile == test[i]){
				issame++;
				//samecount++;
				cout << i << endl;
			}
		}
	}
	/*for (int i = 0; i <= SIZE; i++){
		cout 
	}*/
	return samecount;
}
int main (){
	int count = 0;
	int null;
	char test[SIZE], text[SIZE];
	cout << "Enter the text\n$";
	getline(cin, text);
	cout << "Enter the test\n$";
	cin >> test;
	//cout << "This is test 0=["<< test[0] << 
	//	"] this is test 1=["<< test[1] << "]\n";
	cout << "this is a func in main -> [";
	/*for (int i = 0; i <= SIZE; i++){
		if (text[i] == test[0]){
			char j = text[i];
			cout << j;
		}
	}*/
	cout << "]\n";
	find(text, test);
	cout << "this is count [" << issame/*find(text, test)*/ << "]\n";
	return 0;
}

