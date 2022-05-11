#include <iostream>
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
    sort(L,j);
    sort(R,k);
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
#define   COLS     5
#define   ROWS    4
int  main(){

    int   mat[ROWS][COLS] = {
        {  10,  -1,  35,   -8,   10   },
        {  -9,   9,    5,    8,   -7  },
        {  30,   0,  15,    8,   11  },
        {  -4,  -4,  -20,  8,   10  }
    };

    int  rows, cols;
    sort((int*)mat, ROWS * COLS);
    int  cnt = 0, pos = -1;
    for(cols = 0; cols < COLS; cols++) {
        for(rows = 0; rows < ROWS; rows++) {
            if( mat[rows][cols] >=  0)
                  cnt++;
        }
        if(cnt == ROWS) {
            pos = cols;
            break;
        }
        cnt = 0;
    }
    if(pos != -1)
        cout << "  " << endl;
        cout << "Nomer pervogo stlbca bez otr elementov: " << pos + 1 << endl;
        cout << "  " << endl;

    for(rows= 0; rows < ROWS; rows++) {
         for(cols = 0; cols < COLS; cols++)
            cout << mat[rows][cols] << '\t';
         cout.put('\n');
    }

     cin.get();
}
