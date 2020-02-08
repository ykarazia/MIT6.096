#include <iostream>
using namespace std;

int main() {
  int x;
  int y;

  cout << "Program compares two variables x and y\n";
  cout << "Please provivde value 'x'\n";
  cin >> x;
  cout << "Please provivde value 'y'\n";
  cin >> y;

  if(x > y)
    cout << "x is greater than y\n";
  else if ( x < y )
    cout << "x is less than y\n";
  else
    cout << "x and y are equal\n";
}
