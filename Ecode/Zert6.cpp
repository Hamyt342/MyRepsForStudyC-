#include <iostream>
using namespace std;
template <typename T1, typename T2>
int max (T1 a, T2 b){
	if (a < b)  return b;
	if (a > b)  return a;
	if (a == b) return a;
}
int Colculeit (int a, int b, int c){
	return max(a, a+b) + max(a, b+c) / 1 + max(a + (b * c), 2.40);
}
int main (){
	int a, b, c;
	cout << "Enter the a, b, c with spacecase\n$";
	cin >> a >> b >> c;
	cout << Colculeit(a, b, c) << endl;
	return 0;
}
