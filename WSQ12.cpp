#include <iostream>
using namespace std;

int GCD(int num1, int num2) {

  if(num1 == 0 ) return num2;
  if(num2 == 0 ) return num1;
  if(num1 > num2) return GCD(num2,num1%num2);
  if(num1 < num2) return GCD(num1,num2%num1);
}

int main(){
  int firstnumber, secondnumber;

  cout << "Give me a number, please: ";
  cin >> firstnumber;
  cout << "Give me another number: ";
  cin >> secondnumber;

  cout << "The GCD of " << firstnumber << " and " << secondnumber << " is " << GCD(firstnumber, secondnumber) << endl;

  return 0;
}
