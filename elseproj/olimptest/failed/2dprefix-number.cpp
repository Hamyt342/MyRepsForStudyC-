#include "heder.h"
void Prefix_number(float arr[]);
void ArreyF (float arr[], char choise);
void ArreyF (float arr[]);
void ArreyP (float arr[]);
int main (){
	int size = 10;
	float arr[size];
	ArreyF(arr);
	Prefix_number(arr);
}
void ArreyF(float arr[], char choise) {
        int size  = sizeof((int)arr) / sizeof((int)arr[0]);
        int k = 0;
        if(choise == 'F' || choise == 'f') {
                for(int i = 0; i < size; i++) {
                        arr[i] = k;
                        k++;
                }
        }
        if(choise == 'P' || choise == 'p') {
                cout << "This is arrey :";
                for(int i = 0; i < size; i++) {
                        cout << arr[i] << ", ";
                }
                cout << endl;
        }
}
void ArreyP(float arr[]) {
        int size = sizeof((int)arr) / sizeof((int)arr[0]);
        cout << "This is arrey :";
        for(int i = 0; i < size; i++) {
                cout << arr[i] << ", ";
        }
        cout << endl;
}
void ArreyF(float arr[]) {
        int size = sizeof((int)arr) / sizeof((int)arr[0]);
        int k = 1;
        for(int i = 0; i < size; i++) {
                arr[i] = k;
                k++;
        }
}
//template <typename T>
void Prefix_number(float arr[]) {
        int size = sizeof((int)arr) / sizeof((int)arr[0]);
        int arrey[size], y = 0;
        for(int i = 0; i < size ; i++) {
                y = arrey[i-1] + arr[i];
                arrey[i] = y;
        }
}
