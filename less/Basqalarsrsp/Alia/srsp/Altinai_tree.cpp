#include <iostream>
using namespace std;

struct DATA{
  long long phon_num;
  int talk_time;
};

struct Kartateks{
  Kartateks *left, *right;
  DATA Data;
};

typedef enum type_obj_tree{
  OBJ_LEFT,
  OBJ_RIGHT
} OBJ_TYPE;

Kartateks* root = NULL;

Kartateks* add_obj (Kartateks* kart, DATA& d, OBJ_TYPE type = OBJ_LEFT){
  Kartateks *ptr = new Kartateks;
  ptr->left = ptr->right = NULL;
  ptr->Data = d;
  if (kart == NULL) root = ptr;
  else{
    switch (type){
    case OBJ_RIGHT:kart->right = ptr; break;
    case OBJ_LEFT:kart->left = ptr;
    }
  }
  return ptr;
}
void del_obj(Kartateks* kart){
  if (kart == NULL ) return;
  del_obj(kart->left);
  del_obj(kart->right);
  cout << "удалено :" << kart->Data.phon_num << endl;
  delete kart;
}
void del_obj_all(Kartateks* kart){
  if (kart == NULL) return;
  del_obj(kart->left);
  del_obj(kart->right);
  kart->right = kart->left = NULL;
}
void show_obj(Kartateks* kart){
  if (kart == NULL) return;
  cout << "Номер телефона :" << kart->Data.phon_num
       << "\nДлителность звонка(m) :" <<kart->Data.talk_time << "\n\n";
  show_obj(kart->left);
  show_obj(kart->right);
}
void show_tree(){
  if (root == NULL) return;
  cout << "Номер телефона :" << root->Data.phon_num
       << "\nДлителность звонка(m) :" << root->Data.talk_time << "\n\n";
  show_obj(root->left);
  show_obj(root->right);
}
int main(){
  DATA data = {88457601234, 30};
  add_obj(NULL, data);
  
  data.phon_num = 87849888567;
  data.talk_time = 7;
  Kartateks* kart_left = add_obj(root, data);

  data.phon_num = 87849885674;
  data.talk_time = 1;
  Kartateks* kart_right = add_obj(root, data, OBJ_RIGHT);

  data.phon_num = 87498885674;
  data.talk_time = 2;
  add_obj(kart_left, data);

  data.phon_num = 87849858567;
  data.talk_time = 3;
  add_obj(kart_left, data, OBJ_RIGHT);

  data.phon_num = 87840888567;
  data.talk_time = 4;
  add_obj(kart_right, data);

  data.phon_num = 87316455674;
  data.talk_time = 12;
  add_obj(kart_right, data, OBJ_RIGHT);

  show_tree();
  cout << endl;

  del_obj_all(root);
  delete root;
  return 0;
}
