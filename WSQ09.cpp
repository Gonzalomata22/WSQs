#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;


int main(){

  long long int n, x;
  char answer, yes = 'y', no = 'n';

do {

  cout << "Give me a positive integer, please." << endl;
  cin >> n;

  while (n < 0) {
    cout << "You wrote a non-positive number, try again." << endl;
    cin >> n;
  }

  x = n;

  while (x > 1){
    x = x - 1;
    n = n * x;
  }

  if (n == 0){
    n = 1;
  }

  cout << "The factorial of you number is..." << endl << n << endl;

  cout << "Do you want to try with another number? ( yes = y/ no = n )" << endl;
  cin >> answer;

} while (answer == yes);

  if ( answer == no ) {
    cout << "Thank you, have a nice day." << endl;
  }

  return 0;
}
