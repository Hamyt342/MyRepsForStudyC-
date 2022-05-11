#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream out("text.txt");
	int san, end = 0;
	while(!end){
		cout << "Sandi engiz\n$";
		cin >> san;
		out << san << endl;
		cout << "Shihasin ba?\n1 ia ne 0 joq\n$";
		cin >> end;
	}
	return 0;
}
