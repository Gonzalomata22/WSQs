#include <iostream>
using namespace std;

int main (){

  int A, B, C = 0;
  srand(time (NULL));
  A = rand () % 100 + 1;

while (A != B){

  C = C+ 1;
  cout << "Guess the number that I'm thinking between 1 to 100: ";
  cin >> B;

  if (B < A){
    cout << "Wrong!, it's too low" << endl;
  }
  if (B > A){
    cout << "Wrong!, it's too high" << endl;
  }

}
  if (B == A){
    cout << "You got it!! you guessed the number. Congrats!" << endl;
  }
  cout << "You spend "<< C << " times triying." << endl;

  return 0;
}
