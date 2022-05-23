#include <iostream>
#include <string>
int sden = 0, oden = 0;
using namespace std;
struct Info{
  int san;
};
struct Ahash{
  Info info;
  Ahash *left, *right;
};
//tamirdi jasay funkciasi
Ahash* tamir(int san){
  Ahash* root = new Ahash;
  root->info.san = san;
  root->left = NULL;
  root->right = NULL;
  return root;
}
//Jana elementti ahashqa engizy
void jana_element_engizy(Ahash* root, Ahash* elem){
  if (elem->info.san < root->info.san){
	if (root->left == NULL){
		root->left = elem;
	} else {
		jana_element_engizy(root->left, elem);
	}
  } else {
	if (root->right == NULL){
		root->right = elem;
	} else {
		jana_element_engizy(root->right, elem);
	}
  }
}
//Ahashti korsety
void ahash_korsety(Ahash* cur_elem){
	if (cur_elem->left != NULL){
		ahash_korsety(cur_elem->left);
	}
	cout << "San :" << cur_elem->info.san << endl;
	if (cur_elem->right != NULL){
		ahash_korsety(cur_elem->right);
	}
}
void dengei(Ahash* cur_elem){
	if (cur_elem->left != NULL){
		sden++;
		dengei(cur_elem->left);
	}
	if (cur_elem->right != NULL){
		oden++;
		dengei(cur_elem->right);
	}
	cout << "Soljaq dengei :"  << sden <<
		"\nOnjaq dengei :" << oden << endl;
}
int main(){
	int san, choise, iter = 1;
	cout << "Sndi engiz :"; 
	cin >> san;
	Ahash* root = tamir(san);
	Ahash* elem = NULL;
	while (iter){
		cout << "Ne isteimiz?\n"
			"1 Ahashqa san engizy\n"
			"2 Ahashti korsety\n"
			"3 Denqei korset\n"
			"4 Programma aiagtay\n"
			;
		cin >> choise;
		switch(choise){
			case 1:
				cout << "Sandi jaz :";
				cin >> san;
				elem = tamir(san);
				jana_element_engizy(root, elem);
				break;
			case 2:
				ahash_korsety(root);
				break;
			case 3:
				dengei(root);
				break;
			case 4:
				iter = 0;
				break;
			default:
				cout << "Byl zatti bilmeim\n";
				break;
		}
	}
	return 0;
}
