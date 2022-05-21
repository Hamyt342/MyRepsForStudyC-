#include <iostream>
#include <string>
#define SIZE 64
using namespace std;
struct Tiket{
	char reis_num[SIZE];
	char destination[SIZE];
	char departure_time[SIZE];
};
struct Queue{
	char passenger[SIZE];
	char destination[SIZE];
	char departure_time[SIZE];
};
void queue_ex(Queue*& queue, int& size){
	if (size){
	int j = 1;
	Queue *exqueue = new Queue[--size];
	for (size_t i = 0; i < size + 1; i++) exqueue[i] = queue[j++];
	cout << queue[0].passenger << 
		" уже вылитель его болше нету в очереди";
	if (size){
		cout << " следуещий будеть " <<
			queue[1].passenger << endl;
	}
        delete[] queue;
	queue = exqueue;
	} else {
		cout << "\nНекаго и так нету\n";
	}
}
void queue_add(Queue*& queue, char* pass, char* dest, char* dep, int& size){
	strcpy(queue[size].passenger, pass);
	strcpy(queue[size].destination, dest);
	strcpy(queue[size++].departure_time, dep);
}
void queue_show(Queue* queue, const int size){
	for (size_t i = 0; i < size; i++){
		cout << "\n[" << i << "] эллемент\n" << 
			"Пассожир :" << queue[i].passenger << 
			"\nПункт назначения :" << queue[i].destination <<
			"\nВремя прибытия :" << queue[i].departure_time << endl;
	}
	cout << "Всего в очереди :" << size << "-человек\n";
}
int main(){
	char passenger[SIZE], destination[SIZE], departure_time[SIZE];
	int size = 0, iter = 1, choise;
	Queue *queue = new Queue[size];
	while(iter){
		cout << "\nЧто нужно сделать?\n" << 
			"Добавить пассажира в очеред(1)\n" << 
			"Удалить пассажира из очереди(2)\n" <<
			"Показать очеред(3)\n" <<
			"Закончить ввод(4)\n";
		cin >> choise;
		cin.get();
		switch(choise){
			case 1:	
				cout << "\nВведи ФИО пассожира :";
				cin.get(passenger, SIZE);
				cin.get();
				cout << "Введи Пункт назначеия :";
				cin.get(destination, SIZE);
				cin.get();
				cout << "Введи время прибытие :";
				cin.get(departure_time, SIZE);
				cin.get();
				queue_add(queue, passenger, destination, departure_time, size);
				break;
			case 2:
				queue_ex(queue, size);
				break;
			case 3:
				queue_show(queue, size);
				break;
			case 4:
				iter = 0;
				break;
			default:
				cout << "Я не знаю эту комманду пока что@(\n";
				break;
		}
	}
}
