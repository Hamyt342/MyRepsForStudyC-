#include "heder.h"
template <typename T>
void FullArr (T arr[], T arrey[], int size){
	float k = 0;
        //Full arr
        for (int i = 0; i < size; i++){
                arr[i] = k;
                k++;
        }
	//Clone arr -> arrey
        for (int i = 0; i < size; i++){
                arrey[i] = arr[i];
        }
}
template <typename T>
void ShowArr (T arr[], T arrey[], int size){//Show arr and arrey together
        cout << "This is arr and arrey:\n";
        for (int i = 0; i < size; i++){
                cout << "arr index[" << i << "] var[" <<
                        arr[i] << "]\t";
		cout << "arrey index [" << i << "] arrey [" << 
			arrey[i] << "]\n";
        }
        cout << endl;
}
template <typename T>
void PrefixArr (T arr[], T arrey[], int size){//calculates prefix sums
	int Q; int newsize = size; T pref[newsize];
        //cout << "Enter the step[Q]\n$"; cin >> Q;
        //newsize = size / Q; T pref[newsize];
	for (int i = 0; i < newsize; i++){
        	if (i == 0){
                        arrey[i] = arr[i];
                } else {
                	pref[i] = arrey[i-1] + arr[i];
        	}
		if (i == 0) cout << "This is a prefix arrey: ";
		//Print elements after end of arrey
                if (i < newsize-1){
                        cout << pref[i] << ", ";
                } else {//Print the last element with a dot
			cout << pref[i] << '.';
		}
        }
        cout << endl;
}
int main() {
	int size;
	cout << "Enter size of arrey\n$";
	cin >> size;
	float arr[size]; float arrey[size]; char choise;
	FullArr   (arr, arrey, size);
	ShowArr   (arr, arrey, size);
	PrefixArr (arr, arrey, size);
	/*while (true){
		cout << "Enter the you choise\n$";
		cin >> choise;
		if (choise == 'F' || choise == 'f'){
			FullArr (arr, arrey, size);
		} else if (choise == 's' || choise == 'S'){
			ShowArr (arr, arrey, size);
		} else if (choise == 'P' || choise == 'p'){
			PrefixArr (arr, arrey, size);
		} else if (choise == 'e' or choise == 'E'){
			cout << "Your choise is exiting in program bay!!!\n";
			break;
		} else {
			cout << "Master you haven't taught me this yet!)\n";
		}
	}*/
}

