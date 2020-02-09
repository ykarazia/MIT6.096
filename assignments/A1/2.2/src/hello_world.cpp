#include <iostream>
using namespace std;

int main() {

  const char *msg = "Hello World\n";
  int rcount;
  int cpy;

  cout << "Please provide repetition number for print\n";
  cin >> rcount;

  if (rcount < 0) {
    cout << "Error! integer must be greater than 0\n";
    return -1;
  }

  cout << "For loop:\n";
  for(int i=0; i<rcount; i++)
    cout << msg;

  cout << "While loop:\n";
  cpy=rcount;
  while(cpy>0) {
    cout << msg;
    cpy--;
  }

  cout << "Do while loop:\n";
  cpy=rcount;
  do {
    cout << msg;
    cpy--;
  } while(cpy>0);


  return 0;
}
