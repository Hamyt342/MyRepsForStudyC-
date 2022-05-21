#include <iostream>
using namespace std;
int main (){
	int rows = 3, cols = 3, arr[rows][cols], isnull[rows], u = 0;
	for (size_t i = 0; i < cols; i++){
		for (size_t j = 0; j < rows; j++){
			arr[i][j] = j;
		}
	}
	for (size_t i = 0; i < cols; i++){
                for (size_t j = 0; j < rows; j++){
                        cout << arr[i][j] << ' ';
                }
		cout << endl;
        }
	for (size_t i = 0; i < cols; i++){
                for (size_t j = 0; j < rows; j++){
                        if (arr[i][j] == 0){
				isnull[u] = i;
				u++;
			}
                }
        }
	for (size_t j = 0; j < rows; j++){
                 cout << arr[i] << ' ';
        }
	cout << endl;
}
