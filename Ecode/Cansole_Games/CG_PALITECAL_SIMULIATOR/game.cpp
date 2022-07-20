#include "haders.h"
class Main{
	string country_name;
	int many;
	int income;
	static int regions;
	int GDP;
	public:
	//Basic functions
	int Income_Per_Month(int income, int GDP, int regions){
		return income * GDP * regions;
	}
	int Add_new_Regions(int regions, int count_regios){
		return regions + count_regios;
	}
	int App_GDP(int GDP, int how_much){
		return GDP + how_much;
	}
	//cheat functions
	int Add_Cheat(int how_much){
		return how_much;
	}
	int Del_Cheat(int how_much){
		return how_much;
	}
	void gameloop(string country_name, int many, int income, int regions, int GDP, int how_much){
		while(true){
			Income_Per_Month(income, GDP, regions);
			Add_new_Regions(regions, how_much);
			App_GDP(GDP, how_much);
		}
	}
};
int main(){
	cout << "All is ok my master\n";
	string country_name;
	int many, income, regions, GDP, how_much;
	Main game();
	game.gameloop( country_name, many, income, regions, GDP, how_much);
	return 0;
}
