#include <iostream>
using namespace std;

int main (){

  int low, high, sum=0, dif, count=0;

  cout << "Please give me the inferior number of the range: ";
  cin >> low;
  cout << "Please give me the superior number of the range: ";
  cin >> high;
  dif = (high - low) + 1;

while (count != dif) {
  sum = sum + low;
  low = low + 1;
  count = count + 1;
}
  cout << "The sum of every numbers in the range is : " << sum << endl;

  return 0;
}
