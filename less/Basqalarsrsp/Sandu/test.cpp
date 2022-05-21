#include <iostream>
using namespace std;
int main (){
	int arr[2][2];
	for (int i = 0; i < 3; i++){
		for (int h = 0; h < 3;++h){
			arr[i][h]=1;
			cout << arr[i][h] << endl;
		}
		cout << endl;
	}
}
