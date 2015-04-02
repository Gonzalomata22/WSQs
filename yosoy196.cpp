// Solving Problems with Programming
// Professor Ken Bauer
//
// Gonzalo Mata
// A01630049
#include <string>
#include <iostream>
using namespace std;

#include "BigIntegerLibrary.hh"

bool is_palindrome(int n){
  string x = to_string (n);
  reverse(x.begin(),x.end());
  int y = stoi(x);
  if (n == y){
    return true;
  } else{
      return false;
  }
}

int apply196(int n){
  int candidato;

  string x = to_string (n);
  reverse(x.begin(),x.end());
  int y = stoi(x);

  candidato = y + n;
  return candidato;
}

int main() {
  int low, high, counterpalindrome = 0, becomepalindrome = 0, Lychrelcounter = 0, nonlychrel, lychrel;

  cout << "Introduce el primer numero del rango." << endl;
  cin >> low;
  cout << "Introduce el segundo numero del rango." << endl;
  cin >> high;

  for(int i=low; i<=high; i++){
    if(is_palindrome(i) == true){
      counterpalindrome = counterpalindrome + 1;
    }
    nonlychrel = apply196(i);
    if (is_palindrome(nonlychrel) == true){
      becomepalindrome = becomepalindrome + 1;
    }
    lychrel = apply196(nonlychrel);
    if (is_palindrome(lychrel) == false){
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
