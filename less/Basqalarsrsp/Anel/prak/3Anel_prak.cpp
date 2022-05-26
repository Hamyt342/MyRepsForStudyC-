#include <iostream>

using namespace std;

void search(int *arr, int size, int check){
    for (int i = 0; i < size; i++){
        if (check == arr[i]){
            cout << "Byl san bar!\nOnin indexi :" << i << "\nMani :" << arr[i] << endl;
            break;
        }
    }
}
int main()
{
    int size, check;
    cout << "massivtin elementter sanin engiz\n$";
    cin >> size;
    int arrey[size];
    for (int i = 0; i < size; i++){
        arrey[i] = rand() % 20;
    }
    cout << "Byl kezdeisoq elementten tyratin jiim :\n";
    for (int i = 0; i < size; i++){
        cout << arrey[i] << endl;
    }
    while (true){
        cout << "Qandai sandi izdeimiz?\n$";
        cin >> check;
        search(arrey, size, check);
    }
    return 0;
}
