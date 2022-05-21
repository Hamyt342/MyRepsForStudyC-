#include <iostream>
#include <ctime>
using namespace std;
void sort(int* data, int const len)
{
  int const lenD = len;
  int pivot = 0;
  int ind = lenD/2;
  int i,j = 0,k = 0;
  if(lenD>1){
    int* L = new int[lenD];
    int* R = new int[lenD];
    pivot = data[ind];
    for(i=0;i<lenD;i++){
      if(i!=ind){
        if(data[i]<pivot){
          L[j] = data[i];
          j++;
        }
        else{
          R[k] = data[i];
          k++;
        }
      }
    }
    quickSort(L,j);
    quickSort(R,k);
    for(int cnt=0;cnt<lenD;cnt++){
      if(cnt<j){
        data[cnt] = L[cnt];;
      }
      else if(cnt==j){
        data[cnt] = pivot;
      }
      else{
        data[cnt] = R[cnt-(j+1)];
      }
    }
  }
}
void show_mat (int mat[][], size){
	for (int i = 0; i < size; i++){
		cout << mat[i];
	}
	cout << endl;
}
int main (){
	int rows = 5, cols = 5;
	int mat[rows][cols] = 
	{
		{2, -3, 4, -7, 6},
		{-5, 7, 8, 2, 9},
		{8, -4, 5, 1, 9},
		{0, 6, 7, 3, 5},
		{5, 1, -8, 6, -9}
	};
	srand(time(NULL));
	for (int i = 0; i < rows, i++){
		for (int j = 0; j < cols; j++){
			mat[i][j] = rand()%10;
		}
	}
	sort((int*)mat, rows + cols);
}
