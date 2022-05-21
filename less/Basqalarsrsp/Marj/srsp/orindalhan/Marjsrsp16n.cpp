#include <iostream>
#include <fstream>
using namespace std;
struct Note{
	//дисплейдiң шешу мүмкіндігі
	int x;  // көлденеңнен
	int y;  // тігінен
	int f;          // регенерация жиiлiгi
	float d;        // дисплей диагоналiнiң ұзындығы
	int price;      // бағасы
	char model[21]; // атауы
};
void AllFoo(Note note, int size){
	ofstream fout("note.txt", ios::app);
	for (size_t i = 0; i < size; i++){
	cout << "Qyrlimdi engiz:\n Ati:";
	cin.get(note.model, 21);
	fout << "Ati:" << note.model;
	cout << "Displey sheshy mimkindigi x:";
	cin >> note.x;
	fout << "\ndispley jililigi x:" << note.x;
	cout << "y:";
	cin >> note.y;
	fout << "\ndizpley jililigi y:" << note.y;
	cout << "Regeneracia jililigi:";
	cin >> note.f;
	fout << "\nregeneracia jililigi:" << note.f;
	cout << "Displey dioganaldin yzindihi:";
	cin >> note.d;
	fout << "\ndispley dioganaldin yzindihi:" << note.d;
	cout << "Bahasi:";
	cin >> note.price;
	cin.get();
	fout << "\nBahasi:" << note.price << endl;
	}
	fout.close();
}
int main (){
	Note note; int size = 2;
	AllFoo(note, size);
	return 0;
}
