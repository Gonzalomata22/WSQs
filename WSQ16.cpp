#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream carsfile("93cars.dat.txt");
	string line;
	carsfile.is_open();
	int CityMPG, HighwayMPG, Midrange_price;

	while (getline(carsfile, line)){
		if (line){
			
		}
	}
	return 0;
}