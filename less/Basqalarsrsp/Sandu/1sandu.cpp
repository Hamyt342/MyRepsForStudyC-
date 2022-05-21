#include <iostream>
using namespace std;
int main (){
	int rows = 3, cols = 3, arr[rows][cols], k = 10, 
	    drows = rows, dcols = cols;
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
	for (size_t i = 0; i < rows; ++i){
                for (size_t j = 0; j < cols; ++j){
			if (arr[i][j] == 0){
				dcols--;
				drows--;
			}
		}
	}
	cout << drows << ' ' << dcols << endl;
	int arr2[drows][dcols];
	for (size_t i = 0; i < drows; ++i){
		cout << i << endl;
		for (size_t j = 0; j < dcols; ++j){
			cout << j << endl;
			if (arr[i][j] != 0){
				k = arr[i][j];
				if (k != 0) arr2[i][j] = k;
			}
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
