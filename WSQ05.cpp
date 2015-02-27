#include <iostream>
using namespace std;

int main () {

double F, C;

  cout << "The temperature in Fahrenheit is ";
  cin >> F;
  C = 5 * (F - 32)/9;
  cout << "The temperature in Celsius is ";
  cout << C << endl;

  if (C >= 100){
    cout << "At this temperature the water is boiling" << endl;
  }

  if (C < 100 && C >= 0){
    cout << "At this temperature water is liquid" << endl;
  }
  if (C < 0){
    cout << "At this temperature water is freeze" <<endl;
  }
return 0;
}
