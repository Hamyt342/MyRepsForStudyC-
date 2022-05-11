#include <iostream>
#include <string>
#define SIZE 32
using namespace std;
struct ZNAK{
	char FI[SIZE];
	char znak_zadiaka[SIZE];
	long Den_rajdenia;
};
bool chek(char* arrey, char* arreyc){
	int h = 0;
	for (int i = 0; i < SIZE; i++) if (arrey[i] != arreyc[i]) return false;
	return true;
}
void vvod_o_znake(ZNAK *znak,const int size){
	char FI[SIZE], znak_zadiaka[SIZE];
        int Den_rajdenia;
	for (int i = 0; i < size; i++){
		cout << "\nVvedi familiy i imia cheloveka:";
		cin.get(FI, SIZE); cin.get();
		strcpy(znak[i].FI, FI);
		cout << "\nVvedi znak zadiaka:";
		cin.get(znak_zadiaka, SIZE); cin.get();
		strcpy(znak[i].znak_zadiaka, znak_zadiaka);
		cout << "\nVvedi daty rajdenia:";
		cin >> Den_rajdenia; cin.get();
		znak[i].Den_rajdenia = Den_rajdenia;
	}
}
void znak_cheloveka(ZNAK *znak, char* znak_zadiaka, const int size){
	for (int i = 0; i < size; i++){
		if (chek(znak_zadiaka, znak[i].znak_zadiaka)){
			cout << "\nImia cheloveka: " << znak[i].FI << 
				"\nEgo znak zadiaka: "<< znak[i].znak_zadiaka <<
				"\nDen rojdenia: " << znak[i].Den_rajdenia << endl;
		}
	}
}
int main(){
	ZNAK znak[3];
	char znak_zadiaka[SIZE];
	vvod_o_znake(znak, 3);
	cout << "vvedi znak zadiaka:";
	cin.get(znak_zadiaka, SIZE);
	znak_cheloveka(znak, znak_zadiaka, 3);
}
