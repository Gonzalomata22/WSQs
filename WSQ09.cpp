#include <iostream>
using namespace std;

int main(){

  int n, x;
  cout << "Give me an positive integer, please." << endl;
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

  cout << "The factorial of you number is..." << endl << n << endl;

  return 0;
}
