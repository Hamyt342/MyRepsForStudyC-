#include <iostream>
#include <fstream>
#define SIZE 32
using namespace std;
struct Scan_info{
	char model[SIZE];
	int price;
	double x_size;
	double y_size;
	int optr;
	int grey;
};
Scan_info* addscan(Scan_info* si, const int size){
	if (size == 0) si = new Scan_info[size + 1];
	else {
		Scan_info* tempsi = new Scan_info[size + 1];
		for (int i = 0; i < size; i++) tempsi[i] = si[i]; 
		delete [] si;
		si = tempsi;
	}
	return si;
}
void setData(Scan_info* Scan_info, const int i){
	cout << "Model name, $";
	cin.getline(Scan_info[i].model, SIZE);
	cout << "Price, ";
	cin >> Scan_info[i].price;
	cin.get();
	cout << "X size:,$";
	cin >> Scan_info[i].x_size;
	cout << "Y size:\n$";
	cin >> Scan_info[i].y_size;
	cout << "optr:\n$";
	cin >> Scan_info[i].optr;
	cout << "Grey:\n$";
	cin >> Scan_info[i].grey;
	cin.get();
}
void showData(const Scan_info* Scan_info, const int size){
	cout << "§ " << "Model name\t" << "Price\t" << 
		"X size\t" << "Y size\t" << "Optr\t" << "Grey\n";
	cout << "========================================\n";
	for (int i = 0; i < size; i++){
		cout << "§ " <<
			Scan_info[i].model << '\t' << 
			Scan_info[i].price << '\t' <<
			Scan_info[i].x_size << '\t' << 
			Scan_info[i].y_size << '\t' <<
			Scan_info[i].optr << '\t' << 
			Scan_info[i].grey << endl;
	}
}
int main(){
	Scan_info* scans = 0;
	int i = 0, YesOrNot = 0;
	do {
		scans = addscan(scans, i);
		setData(scans, i);
		i++;
		cout << "Continue entered the date? (1 - yes, 0 - no): ";
		cin >> YesOrNot;
		cin.get();
	} while (YesOrNot != 0);
	showData(scans, i);
	delete[] scans;
	return 0;
}
