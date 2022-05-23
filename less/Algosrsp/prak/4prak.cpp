#include <iostream>
#define size 5
using namespace std;
void taby(int jiim[], int tsan){
	//int size = sizeof(jiim) / sizeof(jiim[0]);
	for (size_t i = 0; i < size; i++){
		if (jiim[i] == tsan){
			cout << "San tabildi onin indexi :" << i << "\nOnin mani :" << jiim[i] << endl;
		}
	}
}
void jiim_tol_kor(int* jiim){
        //int size = sizeof(jiim) / sizeof (jiim[0]);
        for (size_t i = 0; i < size; i++){
                cout << i << " indexti elementti engiz\n$";
                cin >> jiim[i];
        }
        for (size_t i = 0; i < size; i++){
                cout << i << " ndex elementi " <<
                        jiim[i] << " ha ten\n";
        }
}
int main(int argc, char* argv[]){
	int jiim[size], tsan;
	jiim_tol_kor(jiim);
	cout << "Izdeitin sandi jaz\n$";
	cin >> tsan;
	taby(jiim, tsan);
	return 0;
}
