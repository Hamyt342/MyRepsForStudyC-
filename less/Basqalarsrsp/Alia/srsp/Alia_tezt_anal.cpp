#include <iostream>
#include <fstream>
#define SIZE 70
using namespace std;
template <typename T>
void chek_words(T line){
	char this_ch;
	int word_count = 1, probels = 0;
	for (size_t i = 0; i < SIZE; i++){
		this_ch = line[i];
		if (this_ch == ' ' && probels == 0){
			word_count++;
			probels++;
		}
		if (this_ch != ' ') probels = 0;
	}
	cout << "Berilden textte :" << word_count << " soz bar\n";
	word_count = 0;
}
int main(){
	ifstream fin("text.DAT");
	char line[SIZE];
	string text;
	if(fin.is_open()){
		cout << "Fail ashildi\nProgramma orindala aladi\n\n";
		while (fin){
			fin.getline(line, SIZE);
			cout << line << endl;
			chek_words(line);
		}
	} else cout << "Fail tabilhanjoq nemese myldem jasalmahan\n";
	fin.close();
	return 0;
}
