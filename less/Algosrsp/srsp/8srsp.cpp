#include <iostream>
#include <fstream>
#include <string>
#define SIZE 64
using namespace std;
struct TiketTree{
        TiketTree *l, *r;
	char place[SIZE];                     
	int reis_num;
	char FNF[SIZE];                                         
	char flight_day[SIZE];
};                                                                                                                                            
void show(TiketTree* Tree){
	if (Tree != NULL){
		show(Tree->l);
		cout << Tree->reis_num << ' ' << 
			Tree->place[SIZE] << ' ' << 
			Tree->FNF[SIZE] << ' ' << 
			Tree->flight_day[SIZE] << endl;
		show(Tree->r);
    }
}
void del(TiketTree *&Tree){
        if (Tree != NULL){
                del(Tree->l);
                del(Tree->r);
                delete Tree;
                Tree = NULL;
        }
}
template <typename TI, typename TCH>
void add_node(TI reis_num, TCH place, TCH FNF, TCH flight_day,TiketTree *&MyTree){
        if (NULL == MyTree){
            MyTree = new TiketTree;
            MyTree->reis_num = reis_num;
            MyTree->place[SIZE] = place[SIZE];
            MyTree->FNF[SIZE] = FNF[SIZE];
            MyTree->flight_day[SIZE] = flight_day[SIZE];
            MyTree->l = MyTree->r = NULL;
        }
        if (reis_num < MyTree->reis_num){
            if (MyTree->l != NULL) add_node(reis_num, place, FNF, flight_day, MyTree->l);
                else{
                    MyTree->l = new TiketTree;
                    MyTree->l->l = MyTree->l->r = NULL;
                    MyTree->l->reis_num = reis_num;
                    MyTree->l->place[SIZE] = place[SIZE];
                    MyTree->l->FNF[SIZE] = FNF[SIZE];
                    MyTree->l->flight_day[SIZE] = flight_day[SIZE];
                }
        }
        if (reis_num > MyTree->reis_num){
            if (MyTree->r != NULL) add_node(reis_num, place, FNF, flight_day, MyTree->r);
                else{
                    MyTree->r = new TiketTree;
                    MyTree->r->l = MyTree->r->r = NULL;
                    MyTree->r->reis_num = reis_num;
                    MyTree->r->place[SIZE] = place[SIZE];
                    MyTree->r->FNF[SIZE] = FNF[SIZE];
                    MyTree->r->flight_day[SIZE] = flight_day[SIZE];
                }
        }
}
int main(){
    int reis_num, n = 1;
    char place[SIZE], FNF[SIZE], flight_day[SIZE];
    TiketTree *Tree = NULL;
    for (int i = 0; i < n; ++i){
        cout << "Enter reisnum\n";
        cin >> reis_num;
        cin.get();
        cout << "Enter place\n";
        cin.get(place, SIZE);
        cin.get();
        cout << "Enter FNF\n";
        cin.get(FNF, SIZE);
        cin.get();
        cout << "Enter flight_day\n";
        cin.get(flight_day, SIZE);
        cin.get();
        add_node(reis_num, place, FNF, flight_day, Tree);
    }
    show(Tree);
    cout << '\n';
    del(Tree);
}
