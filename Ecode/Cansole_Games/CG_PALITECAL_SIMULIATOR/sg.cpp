#include <iostream>
#include <ctime>
using namespace std;
int main (){
	int num, choose;
	srand(time(NULL));
	while (true){
		num = rand() % 100;
		cout << "Enter your namber\n";
		cin >> choose;
		if (num == choose){
			cout << "you acept, you WIN!!!\n";
			break;
		} if else (num < choose){	
			cout << "the number is lower\n";}
		if else (num > choose)		{cout << "num is upper\n";}
		else				{cout << "you not ceach(((\n";}
	}
	system("pause");
	return 0;
}
