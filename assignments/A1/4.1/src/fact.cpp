#include <iostream> 
using namespace std;

const int fact_table[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

int main() {
  short number;
  cout << "Enter a number: "; cin >> number;

  unsigned long accumulator = 1;

  if(number<0) {
    cout << "ERROR! user input is limited to positive integers\n";
    return -1;
  }

  if(number < 11) {
    cout << "LUT :: The factorial of " << number << " is " << fact_table[number] << "\n";
  } else {
    cout << "CALC :: The factorial of " << number << " is ";
    for(; number > 0; accumulator *= number--);
      cout << accumulator << ".\n";
  }
  

  return 0;
}
