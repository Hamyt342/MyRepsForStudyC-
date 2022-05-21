#include <iostream>
#include <fstream>
#define SIZE 32
using namespace std;
struct laptop{
	char model[SIZE];
	int price;
	double x_size;
	double y_size;
	int optr;
	int grey;
}

/*Scan_info* addscan(Scan_info* si, const int size){
        if (size == 0) si = new Scan_info[size + 1];
        else {
                Scan_info* tempsi = new Scan_info[size + 1];
                for (int i = 0; i < size; i++) tempsi[i] = si[i];
                delete [] si;
                si = tempsi;
        }
        return si;
}*/
;
laptop* addlaptop(laptop* lap, const int size){
	if (size == 0) lap = new laptop[size + 1];
	else {
		laptop* templ = new laptop[size + 1];
		for (int i = 0; i < size; i++) templ[i] = lap[i]; 
		delete [] lap;
		lap = templ;
	}
	return lap;
}
void setData(laptop* laptop, const int i){
	cout << "Model name:\n$";
	cin.getline(laptop[i].model, SIZE);
	cout << "Price:\n$";
	cin >> laptop[i].price;
	cin.get();
	cout << "X size:\n$";
	cin >> laptop[i].x_size;
	cout << "Y size:\n$";
	cin >> laptop[i].y_size;
	cout << "optr:\n$";
	cin >> laptop[i].optr;
	cout << "Grey:\n$";
	cin >> laptop[i].grey;
	cin.get();
}
void showData(const laptop* laptop, const int size){
	cout << "§ " << "Model name\t" << "Price\t" << 
		"X size\t" << "Y size\t" << "Optr\t" << "Grey\n";
	cout << "========================================\n";
	for (int i = 0; i < size; i++){
		cout << "§ " <<
			laptop[i].model << '\t' << 
			laptop[i].price << '\t' <<
			laptop[i].x_size << '\t' << 
			laptop[i].y_size << '\t' <<
			laptop[i].optr << '\t' << 
			laptop[i].grey << endl;
	}
}
int main(){
	laptop* laptop = 0;
	int i = 0, YesOrNot = 0;
	do {
		laptop = addlaptop(laptop, i);
		setData(laptop, i);
		i++;
		cout << "Continue entered the date? (1 - yes, 0 - no): ";
		cin >> YesOrNot;
		cin.get();
	} while (YesOrNot != 0);
	showData(laptop, i);
	delete[] laptop;
	return 0;
}
