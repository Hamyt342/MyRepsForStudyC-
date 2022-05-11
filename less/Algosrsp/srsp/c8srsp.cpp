#include <iostream>
#include <fstream>
#include <string>
#define SIZE 64
using namespace std;
template <class MCH, typename MI>
class Airfloot{
	Airfloot(){}
	Airfloot(MCH r_name[SIZE], MCH r_user_name[SIZE], MCH r_fly_dey[SIZE], MI r_num){
		this->r_name = r_name;
		this->r_user_name = r_user_name;
		this->r_fly_dey = r_fly_dey;
		this->r_num = r_num;
	}
	MCH r_name[SIZE];
	MCH r_user_name[SIZE];
	MCH r_fly_dey[SIZE];
	MI r_num;
	string str;
	/*ofstream fout("Airfloot.txt", ios::out);
	ifstream fin("Airfloot.txt", ios::in);
        if (fout.is_open()) cout << "File is open\n";
        else cout << "File in not open\n";
	if (fin.is_open()) cout << "File is open\n";
        else cout << "File in not open\n";*/
	public:
	void get_r(){
		for (!fin.eof()){
			fin >> str;
			cout << str << endl;
		}
	}
	void set_r(Airfloot reis, int rcols){
		for (size_t i = 0; i < rcols; ++i){
		cout << "set " << i << "reis:\nReise name\n$"; 
		cin.get(reis.r_name, SIZE);
		cout << "Reis user name\n$"; 
		cin.get(reis.r_user_name, SIZE);
		cout << "Reise fly dey\n$";
		cin.get(reis.r_fly_dey, SIZE);
		cout << "Reis num[id]\n$";
		cin >> reis.r_num;
		cin.get();
		fout << reis;
		}
	}
	fout.close();
	fin.close();
};
int main (){
	ofstream fout("Airfloot.txt", ios::out);
	ifstream fin("Airfloot.txt", ios::in);
	if (fout.is_open()) cout << "File is open\n";
	else cout << "File in not open\n";
	if (fin.is_open()) cout << "File is open\n";
	else cout << "File in not open\n";
	string str;
	int iter;
	Airfloot<char, int> reis;
	cout << "How mach reise you wont have?\n$";
	cin >> iter;
	cin.get();
	reis.set_r(reis, iter);
	cout << "Do you wont exit? exit(0) or complite(1)\n$";
	cin >> iter;
	reis.get_r();
	return 0;
}
