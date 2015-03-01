#include <iostream>
//#include "BigIntegerLibrary.hh"
using namespace std;

int main(){

  int n, x;
  char answer, yes = 'y', no = 'n';


do {

  cout << "Give me a positive integer, please." << endl;
  cin >> n;

  //this is a restringer of non-positive numbers
  while (n < 0) {
    cout << "You wrote a non-positive number, try again." << endl;
    cin >> n;
  }

  x = n; // x is the "counter" of times to multiplicate the n number

  while (x > 1){
    x = x - 1;  //this while makes the factorial operation Ex: n=3
    n = n * x;  //now x=2, so: 3=3*2 and it returns to x=x-1 and x will be 1 and the loop ends
  }  /* why x>1? because if you have x>0 as conditional the last number in multiplication
  will be 0 and the answer will be 0, but with this conditional the last number
  to multiplicate left will be 1*/

  cout << "The factorial of you number is..." << endl << n << endl;

  cout << "Do you want to try with another number? ( yes = y/ no = n )" << endl;
  cin >> answer;

} while (answer == yes);

  if ( answer == no ) {
    cout << "Thank you, have a nice day." << endl;
  }

  return 0;
}
