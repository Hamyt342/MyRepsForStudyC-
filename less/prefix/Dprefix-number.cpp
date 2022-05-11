#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int size, Q, choise;
	cout << "Enter size of arrey\n$"; cin >> size;
	int pref[size], k = 1;
        for (int i = 0; i < size; i++){
                pref[i] = k;
                k++;
        }
	cout << "This is prefix arrey:\n";
        for (int i = 0; i < size; i++){
                if (i < size-1) cout << pref[i] << ", ";
		else            cout << pref[i] << ".\n";
        }
        cout << "\nEnter the step[Q]\n$"; cin >> Q;
	cout << "Show the all arrey?\n1(yes) or 0(no)\n";
	for (int f = 0; f < Q; ++f)i{
		cout << "This is [" << f << "] prefix arrey\n";
		for (int i = 0; i < size; i++){
			switch(choise){
				case 0:
					if (i != 0)	pref[i] = pref[i-1] + pref[i];
					else 		pref[i] = pref[i];
					break;
				case 1:
					if (i != 0)     pref[i] = pref[i-1] + pref[i];
					else            pref[i] = pref[i];
					if (i < size-1) cout << pref[i] << ", ";
               				else 		cout << pref[i] << ".\n";
					break;
				default:
					break;
			}
		}
	}
	cout << endl;
}

