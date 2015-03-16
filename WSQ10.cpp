#include <iostream>
using namespace std;

int main (){

  int size, count=0;
  float usrnumber, sum=0;

  cout << "Give me the number of spaces for your list: " << endl;
  cin >> size;
  cout << "------------------" << endl;
  float array[size];

  for(int i = 0; i < size ; i++){
    count = count+1;
    cout << "Give me the number to place " << i + 1 << endl;
    cin >> usrnumber;
    array[i] = usrnumber;
    sum = sum + usrnumber; //This part makes the sum each time when the user puts a new number.
  }

  cout << endl << "Your numbers are: " << endl;
  cout << count;
  cout << "The sum of your numbers is: " << sum << endl;
  cout << "The average of your numbers is: " << sum/size << endl;
  cout << "The standard deviation of those numbers is: " << endl;

  return 0;
}
