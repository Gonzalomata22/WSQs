#include <iostream>
using namespace std;

int Sum(int P, int G){
  int sum = P + G;
    return sum;
}

int Dif(int P, int G){
  int dif = P - G;
  return dif;
}

int product(int P, int G){
  int prod = P * G;
  return prod;
}

int division(int P, int G){
  int di = P / G;
  return di;
}

int Rem(int P, int G){
  int rem = P % G;
  return rem;
}

int main(){
  int P, G;

  cout << "This program can do come operations of two numbers for you." << endl;
  cout << "Give me the first number please: ";
  cin >> P;
  cout << "Give me the second number please: ";
  cin >> G;

  int sum = Sum(P, G);
  int dif = Dif(P, G);
  int prod = product(P, G);
  int di = division(P, G);
  int rem = Rem(P, G);

  cout << "The sum of the two numbers is: " << sum << endl;
  cout << "The difference of two numbers is: " << dif << endl;
  cout << "The product of the two numbers is: " << prod << endl;
  cout << "The division of the two numbers is: " << di << endl;
  cout << "The remainder of two numbers is: " << rem << endl;

  return 0;
}
