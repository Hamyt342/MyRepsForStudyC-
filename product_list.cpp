#include "heder.h"
#define SIZE 40
class Product{
	int pro_id, pro_cost, pro_quantity;
	char *pro_name;
	public:
		Product (){}
		Product 
		(int pro_id, int pro_cost, int pro_quantity, char *pro_name){
			this->pro_id = pro_id;
			this->pro_cost = pro_cost;
			this->pro_quantity = pro_quantity;
			this->pro_name = pro_name;
		}
		void SetPro
		(int pro_id, int pro_cost, int pro_quantity, char *pro_name){
			cout << "Enter the product id\n$";
			cin >> pro_id;
			cout << "Enter the product cost\n$";
			cin >> pro_cost;
			cout << "Enter the product quantity\n$";
			cin >> pro_quantity;
			cout << "Enter the product name\n$";
			cin.get(pro_name ,SIZE);
		}
		void GetPro(){}
};
int main (){

}

