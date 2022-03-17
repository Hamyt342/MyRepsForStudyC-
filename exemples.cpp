#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	setlocale (LC_ALL, "ru");
	char z;
	for (z='A' ; z<='Z'; z++){
		putchar(z);
		cout << " ";
	}
	cout << "\n\n";
	for (z='A' ; z<='Z'; z++){
		if ((z=='K') || (z=='U')) { cout << "\n";}
		printf("%c-%d ", z, z);
	}
	cout << "\n\n";
	for (z='0' ; z<='9'; z++){
		if ((z=='0') || (z=='5')) { cout << "\n";}
		printf("%c-%d ", z, z);
	}
	cout << "\n\n";
	system("pause");
	return 0;
}
