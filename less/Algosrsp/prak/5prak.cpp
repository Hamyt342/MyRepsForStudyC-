#include <iostream>
#include <string>
#define SIZE 50
using namespace std;
struct Info{
  int san;
};
struct Ahash{
  Info info;
  Ahash *left, *right;
};
//tamirdi jasay funkciasi
Ahash* bytaq(int san){
  Ahash* root = new Ahash;
  root->info.san = san;
  root->left = NULL;
  root->right = NULL;
  return root;
}
//Jana elementti ahashqa engizy
void j_e_e(Ahash* root, Ahash* elem){
  if (elem->info.san < root->info.san){
        if (root->left == NULL){
                root->left = elem;
        } else {
                j_e_e(root->left, elem);
        }
  } else {
        if (root->right == NULL){
                root->right = elem;
        } else {
                j_e_e(root->right, elem);
        }
  }
}
//Ahashti korsety
void korset(Ahash* cur_elem){
        if (cur_elem->left != NULL){
                korset(cur_elem->left);
        }
        cout << "San :" << cur_elem->info.san << endl;
        if (cur_elem->right != NULL){
                korset(cur_elem->right);
        }
}
int max_elem = 0;
int max_elem_taby(Ahash* bytaq){
    while (bytaq->right != NULL){
        max_elem_taby(bytaq->right);
    }
}
int main(){
        int san, choose, iter = 1;
        cout << "Sndi engiz :";
        cin >> san;
        Ahash* root = bytaq(san);
        Ahash* elem = NULL;
        while (iter){
                cout << "Ne isteimiz?\n"
                        "1 Ahashqa san engizy\n"
                        "2 Ahashti korsety\n"
                        "3 Mamimaldi elementin korsety"
                        "4 Programma aiagtay\n"
                        ;
                cin >> choose;
                switch(choose){
                        case 1:
                                cout << "Sandi jaz :";
                                cin >> san;
                                elem = bytaq(san);
                                j_e_e(root, elem);
                                break;
                        case 2:
                                korset(root);
                                break;
                        case 3:
                                cout << max_elem_taby(root) << endl;
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
