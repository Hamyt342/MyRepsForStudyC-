#include <iostream>
using namespace std;
void sort(int *data, int lenD){
	int tmp = 0;
	for(int i = 0;i<lenD;i++){
		for(int j = (lenD-1);j>=(i+1);j--){
			if(data[j]<data[j-1]){
				tmp = data[j];
				data[j]=data[j-1];
				data[j-1]=tmp;
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
