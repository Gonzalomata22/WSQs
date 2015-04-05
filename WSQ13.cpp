#include <iostream>
using namespace std;

double squareroot(double x){
  double r = x, t = 0;
  while (t != r){
    t = r;
    r = (x/r + r)/2;
  }
  return r;
}

int main(){
  double num;
  cout << "This program makes the square root by Babylonian mathod." << endl << endl;
  cout << "Give me a number to do the square root: " << endl;
  cin >> num;

  cout << "The square root is : " << squareroot(num) << endl;
  return 0;
}
