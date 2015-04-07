// Solving Problems with Programming
// Professor Ken Bauer
//
// Gonzalo Mata
// A01630049
#include <string>
#include <iostream>
using namespace std;

#include "BigIntegerLibrary.hh"

bool is_palindrome(BigInteger n){
  string x = bigIntegerToString (n);
  reverse(x.begin(),x.end());
  BigInteger y = stringToBigInteger(x);
  if (n == y){
    return true;
  } else{
      return false;
  }
}

BigInteger apply196(BigInteger n){
  BigInteger candidato;

  string x = bigIntegerToString (n);
  reverse(x.begin(),x.end());
  BigInteger y = stringToBigInteger(x);

  candidato = y + n;
  return candidato;
}

int main() {
  int low, high, counterpalindrome = 0, becomepalindrome = 0, Lychrelcounter = 0, nonlychrel, lychrel;
  BigInteger candidate;
  cout << "Introduce el primer numero del rango." << endl;
  cin >> low;
  cout << "Introduce el segundo numero del rango." << endl;
  cin >> high;

  for(int i=low; i<=high; i++){
    if(is_palindrome(i) == true){
      counterpalindrome = counterpalindrome + 1;
    } else{

      candidate = i;
      int counter = 0;

      while(is_palindrome(candidate)==false && counter < 30){
        candidate = apply196(candidate);
        counter++;
        if (is_palindrome(candidate) == true){
          becomepalindrome++;
        }
      }
    }
    // why out? palindrome or counter 30+
    if (is_palindrome(candidate) == false) {
      Lychrelcounter++;
      cout << "Encontre un numero de Lychrel: " << i << endl;
    }
  }


  cout << "El rango de numeros analizados fue de " << (high - low) + 1 << " numeros." << endl;
  cout << "Encontre " << counterpalindrome << " numeros que son palindromos naturales." << endl;
  cout << "Encontre " << becomepalindrome << " numeros que no son numeros de Lychrel." << endl;
  cout << "Encontre " << Lychrelcounter << " numeros de Lychrel." << endl;

  return 0;
}
