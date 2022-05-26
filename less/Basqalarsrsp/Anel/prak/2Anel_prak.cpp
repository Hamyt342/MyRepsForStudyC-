#include <iostream>

using namespace std;

void sort(int *data, int lenD){
    int tmp = 0;
    for(int i = 0; i<lenD; i++){
        for(int j = (lenD-1); j>=(i+1); j--){
                if(data[j] < data[j-1]){
                    tmp = data[j];
                    data[j] = data[j-1];
                    data[j-1] = tmp;
                }
        }
    }
}
int main()
{
    int arrey[10];
    for (int i = 0; i < 10; i++){
        arrey[i] = rand() % 20;
    }
    cout << "Syriptalmahan jiim :\n";
    for (int i = 0; i < 10; i++){
        cout << arrey[i] << endl;
    }
    sort(arrey, 10);
    cout << "Syriptalhan jiim :\n";
    for (int i= 10 - 1;i >=0 ;i-- ){
	cout << arrey[i] << endl;
    }
    return 0;
}
