#include <iostream>
#include <math.h>
using namespace std;

int main (){

  int size, count=0;
  float usrnumber, sum=0.0, var=0, average, deviation, variation;

  cout << "Give me the number of spaces for your list: " << endl;
  cin >> size;
  cout << "------------------" << endl;
  float array[size];

  for(int i = 0; i < size ; i++){
    cout << "Give me the number to place " << i + 1 << endl;
    cin >> usrnumber;
    array[i] = usrnumber;
    sum = sum + usrnumber; /*This part makes the sum each time
    when the user puts a new number*/
  }

  average = sum/size;

  cout << endl << "Your numbers are: " << endl;

  for(int i=0; i < size; i++) {
    count = count + 1;
    cout << count << ".- " << array[i] << endl;
  }/*This loop makes the list of the numbers into the arrays*/

  cout << "The sum of your numbers is: " << sum << endl;
  cout << "The average of your numbers is: " << average << endl;

  for(int i=(size-1); i>=0; --i){
    var = ((array[i]-average)*(array[i]-average) + var);
  } /*This loop makes something call "varianza" of the data, then it will have
  a square root to make it the standard deviation*/

  variation = var/size;
  deviation = sqrt(variation);

  cout << "The standard deviation of those numbers is: " << deviation << endl;

  return 0;
}
