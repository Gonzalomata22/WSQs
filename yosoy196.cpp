// Solving Problems with Programming
// Professor Ken Bauer
//
// Gonzalo Mata
// A01630049
//
#include <string>
#include <iostream>
#include "BigIntegerLibrary.hh"

using namespace std;

/*
 * This function receives a BigInteger n and checks if it is a palindrome
 * Return true if n is a palindrome, return false otherwise
 */

bool is_palindrome(BigInteger n){
  int candidato;
  string x = to_string (n);
  reverse(x.begin(),x.end());
  int y = stoi(x);
  candidato = n + y;
  if 
  return true; // You need to fix this, this is not right
}

/*
 * This function receives a BigInteger n and returns the value of n plus the inverse of n.
 */
BigInteger apply196(BigInteger n){

  return n; // you need to replace this with code that works
}

BigInteger invert(int n){
  string x = to_string (n);
  reverse(x.begin(),x.end());
  int y = stoi(x);
  return y;
}


/*
 * Your main program goes below and should use the two functions above
 */
int main() {
  int lower, high, counter = 0;
  cout << "Introduce el primer numero del rango." << endl;
  cin >> lower;
  cout << "Introduce el segundo numero del rango." << endl;
  cin >> high;

  is_palindrome(lower);
  is_palindrome(high);

  return 0;
}
