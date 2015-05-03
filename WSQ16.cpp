#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream carsfile("93cars.dat.txt");
	carsfile.is_open();
	float CityMPG = 0.0, HighwayMPG = 0.0, Midrange_price = 0.0, sum_range = 0.0, sum_city = 0.0, sum_highway = 0.0;
	int counter = 0;
	string line, midrange, city, highway;

	while (getline(carsfile, line)){
		if ((counter%2) == 0){
			midrange = line.substr(43, 46);
			Midrange_price = atoi(midrange.c_str());

			city = line.substr(53, 54);
			CityMPG = atoi(city.c_str());

			highway = line.substr(56, 57);
			HighwayMPG = atoi(highway.c_str());
			
			sum_range = sum_range + Midrange_price;
			sum_city = sum_city + CityMPG;
			sum_highway = sum_highway + HighwayMPG;
		}
		counter++;
	}
	cout << "The sum of the midrange of the cars is: " << sum_range/93 << endl;
	cout << "The sum of the MPG in the city is: " << sum_city/93 << endl;
	cout << "The sum og the MPG in highway is: " << sum_highway/93 << endl;
	return 0;
}