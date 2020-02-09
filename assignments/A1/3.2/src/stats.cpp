#include <iostream>
using namespace std;

int main() {

  int N;
  double res = 0;

  cout << "This program calculates the mean of integers entered by the user\n";
  cout << "Please enter the number of integers which will follow:\n";
  cin >> N; 

    cout << "Please enter all the integers separated by newlines\n";
  for(int i=0; i<N; i++) {
    int val;
    cin >> val;
    res += val;
  }
    res/=N;


    cout << "The mean of all user inputted intergers is: " << res << "\n";
}
