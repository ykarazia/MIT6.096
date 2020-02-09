#include <iostream>
using namespace std;

int main() {
  int N;
  int res;
  cout << "This program takes a user defined interger 'N' and checks to ensure it is devisible by 5\n";
  cout << "To exit the program, input a value less than 0\n";

  while(1) {
    cout << "Please provide 'N' below:\n";
    cin >> N;
    if(N<0)
      break;
    res = N<1 ? -1 :
                      N%5 ? -1 : N/5;
    if(res==-1)
      continue;
    cout << "Result: " << res << "\n";
  }

  cout << "Goodbye!\n";
}
