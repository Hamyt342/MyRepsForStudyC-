#include "haders.h"
class Game{
	string country_name;
	int many;
	int income;
	static int regions;
	int GDP;
	//class Region_factories{
	int industry_level[regions];
	public:
	Game(){
		country_name = "NONE";
        	many = 400;
        	income = 10;
		regions = 1;
		industry_level[regions];
		GDP = 10;
	}
	Game(string country_name, int many, int income, int regions, int GDP, int* industry_level){
		this->country_name = country_name;
        	this->many = many;
	        this->income = income;
		this->regions = regions;
		this->industry_level = industry_level;
		this->GDP = GDP;
	}
	//Basic functions
	int Income_Per_Month(int income, int GDP, int regions){
		return income * GDP * regions;
	}
	/*int Factorio_income(int income, int GDP, int regions, int industry_level){
		return income * GDP * regions * in;
	}*/
	int Add_new_Regions(int regions, int count_regios){
		return regions + count_regios;
	}
	int App_GDP(int GDP, int how_much){
		return GDP + how_much;
	}
	int Add_industry_level(int* industry_level, int size){
		int level_count = 100, val = 0;
		cout << "Enter the industry level of your country\n";
		for (size_t i = 0; i < size; i++){
			cout << "You availadle level is " << level_count << endl;
			if (level_count != 0){
				cin >> val;
				if (val < level_count){
					industry_level[i] = val;
					level_count -= industry_level[i];
				} else if (val > level_count){
					cout << "You available level is " << level_count << 
						"and val is " << val << "\nYou can't enter this\n";
				}
			}
		}
	}
	//cheat functions
	int Add_Cheat(int how_much){
		return how_much;
	}
	int Del_Cheat(int how_much){
		return how_much;
	}
};
void games_run(){
}
int main(){
	cout << "All is ok my master\n";
	return 0;
}
