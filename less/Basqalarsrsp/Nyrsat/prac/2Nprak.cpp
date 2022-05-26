#include <iostream>
using namespace std;
int main(){
	string str;
	cout << "Text jaz :";
	getline(cin, str);
	if (str.find("key") != -1)
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}
