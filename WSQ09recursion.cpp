#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

int factorial(int n){
  if (n == 0){
    return 1;
  }
  return n * factorial(n-1);
}


int main(){

  long long n;
  char answer, yes = 'y', no = 'n';

do{
  cout << "Give me a positive number." << endl;
  cin >> n;
  cout << "The factorial of you number is: " << factorial (n) << endl;

  cout << "Do you want to try again? " << endl;
  cin >> answer;
} while (answer == yes);

if (answer == no){
  cout << "Thank you, have a nice day." << endl;
}

  return 0;
}
