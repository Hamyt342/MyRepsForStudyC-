#include <iostream>
#include <fstream>
#define SIZE 2
using namespace std;
struct NOTEBOOK{
	char model[21]; // атауы  
	struct size{ // габариттiк өлшемдері  
		float x;  float y;  float z;  
	}disp;
	float w; // салмағы  
	int prise; // бағасы
};
void fn(NOTEBOOK *note){
	for (int i = 0; i < SIZE; i++){
		cout << "Enter the name of laptop\n$";
		cin.get(note[i].model, 21);
		cout << "Enter the size of disp\nx = ";
		cin >> note[i].disp.x;
		cout << "y = ";
		cin >> note[i].disp.y;
		cout << "z = ";
		cin >> note[i].disp.z;
		cout << "Enter the whight\n$";
		cin >> note[i].w;
		cout << "Enter the prise\n$";
		cin >> note[i].prise;
		cin.get();
	}
}
void sif(NOTEBOOK *note){
	fstream fio("note.txt", ios::app | ios::in);
	int s = 0;
	while (s < SIZE){
                fio << note[s].model << endl;
                fio << note[s].disp.x << endl;
                fio << note[s].disp.y << endl;
                fio << note[s].disp.z << endl;
                fio << note[s].w << endl;
                fio << note[s].prise << "\n\n";
		s++;
	}
	fio.close();
}
int main(){
	NOTEBOOK note[SIZE];
	int s = 0;
	fn((NOTEBOOK*)note);
	sif((NOTEBOOK*)note);
	return 0;
}
