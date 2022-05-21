#include <iostream>
#include <string>
#define SIZE 50
using namespace std;
struct Book{
  char UDC[SIZE];
  char Autor_name[SIZE];
  char Book_name[SIZE];
  int Date_cre;
  int Limit;
};
struct Librery{
  Book book;
  Librery *left, *right;
};
//Create root as we want
Librery* create_librery(char* UDC, char* Autor_name, char* Book_name, int Date_cre, int Limit){
  Librery* root = new Librery;
  strcpy(root->book.UDC, UDC);
  strcpy(root->book.Autor_name, Autor_name);
  strcpy(root->book.Book_name, Book_name);
  root->book.Date_cre = Date_cre;
  root->book.Limit = Limit;
  root->left = NULL;
  root->right = NULL;
  return root;
}
//Add a new ellement in the trer
void add_new_elem(Librery* root, Librery* elem){
  if (elem->book.Date_cre < root->book.Date_cre){
	if (root->left == NULL){
		root->left = elem;
	} else {
		add_new_elem(root->left, elem);
	}
  } else {
	if (root->right == NULL){
		root->right = elem;
	} else {
		add_new_elem(root->right, elem);
	}
  }
}
void show_Librery(Librery* cur_elem){
	if (cur_elem->left != NULL){
		show_Librery(cur_elem->left);
	}
	cout << "Kitap :\n"
		"URC :" << cur_elem->book.UDC << 
		"\nAutordin ati :" << cur_elem->book.Autor_name <<
		"\nKitaptin ati :" << cur_elem->book.Book_name <<
		"\nJazily jili :" << cur_elem->book.Date_cre <<
		"\nKitaphanadahi kitap sani :"<< cur_elem->book.Limit << endl;
	if (cur_elem->right != NULL){
		show_Librery(cur_elem->right);
	}
}
int main(){
	char UDC[SIZE], Autor_name[SIZE], Book_name[SIZE];
	int Date_cre, Limit, choise, iter;
	cout << "Kitap tyrali aqparat jaz:\n"
		"\nUDC :";			
	cin.get(UDC, SIZE); cin.get();
	cout << "\nAutordin ati :";		
	cin.get(Autor_name, SIZE); cin.get();
	cout << "\nkitaptin ati :";	
	cin.get(Book_name, SIZE); cin.get();
	cout << "\nJazily jili :";	
	cin >> Date_cre;
	cout << "\nKitaphanadahi kitap sani :"; 
	cin >> Limit;
	Librery* root = create_librery(UDC, Autor_name, Book_name, Date_cre, Limit);
	Librery* elem = NULL;
	while (iter){
		cout << "Ne isteimiz?\n"
			"1 kitap qosy\n"
			"2 Kitaphanani korsety\n"
			"3 Programmani aiaqtay\n";
		cin >> choise;
		switch(choise){
			case 1:
				cin.get();
				cout << "Kitap tyrali aqparat jaz:\n\nUDC :";
				cin.get(UDC, SIZE); cin.get();
				cout << "\nAutordin ati :";
				cin.get(Autor_name, SIZE); cin.get();
				cout << "\nKitaptin ati :";
				cin.get(Book_name, SIZE); cin.get();
				cout << "\nJazily jili :";             
				cin >> Date_cre;                    
				cout << "\nKitaphanadahi kitap sani :";  
				cin >> Limit;
				elem = create_librery(UDC, Autor_name, Book_name, Date_cre, Limit);
				add_new_elem(root, elem);
				break;
			case 2:
				show_Librery(root);
				break;
			case 3:
				iter = 0;
				break;
			default:
				cout << "Bilmeitin zatti istei alalmaim\n";
				break;
		}
	}
}
