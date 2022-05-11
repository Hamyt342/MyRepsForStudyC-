#include <iostream>
#include <fstream>
using namespace std;
struct scan_info{
	char model[25];
	int price;
	double x_size;
	double y_size;
	int optr;
	int grey;
};
void full_scan(scan_info *scan, const int SIZE){
	cout << "Skaner jaili aqparattar engizy:\n";
	for (int i = 0; i < SIZE; i++){
		cout << "Atin engiz\n:";
		cin.get(scan[i].model, 21);
		cout << "Bahasin engiz\n$";
		cin >> scan[i].price;
		cout << "Koldenen olshey aimahin engiz\nx = ";
		cin >> scan[i].x_size;
		cout << "Tik olshey aimahin engiz\ny = ";
		cin >> scan[i].y_size;
		cout << "Optikaliq sheshy\n:";
		cin >> scan[i].optr;
		cout << "Syri tys gradaciasin engiz\n$";
		cin >> scan[i].grey;
		cin.get();
	}
}
void sif(scan_info *scan, const int SIZE){
	fstream fio("note.txt", ios::app | ios::in);
	int s = 0;
	while (s < SIZE){
        	fio << scan[i].model << endl;
		fio << scan[i].price << endl;
        	fio << scan[i].x_size << endl;
		fio << scan[i].y_size << endl;
                fio << scan[i].optr << endl;
 		fio << scan[i].grey << "\n\n";
		s++;
	}
	fio.close();
}
int main(){
	const int SIZE = 4;
	scan_info scan[SIZE];
	full_scan((scan_info*)scan, SIZE);
	sif((scan_info*)scan, SIZE);
	return 0;
}
