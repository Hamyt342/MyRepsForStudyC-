#include <iostream>
using namespace std;
void Arrfoo(int *&arr[], int cols, int rows){
	int drows = rows, dcols = cols k = 0;
	for (size_t i = 0; i < cols; ++i)
		for (size_t j = 0; j < cols; ++j)
			if (arr[i][j] == 0) k++;
	drows -= k; dcols -= k;
	for (size_t i = 0; i < drows; ++i){
		for (size_t j = 0; j < dcols){
			if (){}
		}
	}
	int **newarr = new int*[];
	for (size_t i = 0; i < cols; ++i) newarr[i] = new int [];
	for (size_t i = 0; i < cols; ++i){}
}
int main (){
	int rows = 3, cols = 3, arr[rows][cols], k = 10, drows = rows, dcols = cols;
	int **arr = new int* [];
	cout << "Jiimnin elementterin engiz\n$";
	for (size_t i = 0; i < rows; ++i){
		for (size_t j = 0; j < cols; ++j){
			cout << j << " = ";
			cin >> k;
			arr[i][j] = k;
		}
	}
	cout << "Arr\n";
	for (size_t i = 0; i < rows; ++i){
		for (size_t j = 0; j < cols; ++j) cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	cout << drows << ' ' << dcols << endl;
	int arr2[drows][dcols];
	for (size_t i = 0; i < drows; ++i){
		cout << i << endl;
		for (size_t j = 0; j < dcols; ++j){
			cout << j << endl;
			if (arr[i][j] != 0) arr2[i][j] = arr[i][j];
		}
	}
	cout << "arr2\n";
	for (size_t i = 0; i < rows; ++i){
		for (size_t j = 0; j < cols; ++j)
                        cout << arr2[i][j] << " ";
		cout << endl;
	}
        cout << endl;
	return 0;
}
