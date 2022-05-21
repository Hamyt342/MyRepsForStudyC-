#include <iostream>
using namespace std;
int main (){
	int rows = 3, cols = 3, arr[rows][cols], k = 10, drows = 0, dcols = 0;
	int **arr2 = new int* [];
	cout << "Jiimnin elementterin engiz\n$";
	for (size_t i = 0; i < rows; ++i)
		for (size_t j = 0; j < cols; ++j)
			arr[i][j] = k;
	for (size_t i = 0; i < rows; ++i)
		for (size_t j = 0; j < cols; ++j)
			cout << arr[i][j] << " ";
	for (size_t i = 0; i < rows; ++i)
                for (size_t j = 0; j < cols; ++j)
			if (arr[i][j] == 0){
				drows++;
				dcols++;
			}
	int arr2[drows][dcols];
	for (size_t i = 0; i < drows; ++i)
		for (size_t j = 0; j < dcols; ++j)
			arr2[][];
	for (size_t i = 0; i < rows; ++i)
		delete[] arr2[i];
	delete[] arr2;
	return 0;
}
