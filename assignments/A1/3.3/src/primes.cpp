#include <iostream>
using namespace std;

//Functoin takes an integer input 'num'.
//foreach int i within 'num', check i%num == 0, and increment count.
//count must == 2
bool isPrime(int num) {
  unsigned int count=0;

  for(int i=num; i>0; i--) {
    if((num%i)==0)
      count++;
  }

  if(count == 2)
    return 1;
  else 
    return 0;
}

int main() {
  int *res = NULL;
  unsigned int count=0;
  int i=0;
  int N;

  cout << "This program finds the first N prime numbers\n";
  cout << "Please provide 'N' as a positive integer\n";
  cin >> N;

  res = new int[N];

  while(count < N) {
    if(isPrime(i)) {
      res[count] = i;
      count++;
    }

    i++;
  }

  cout << "Found the following " << N << " prime numbers\n";
  for(int j=0; j<N; j++) {
   cout << res[j] << "\n"; 
  }
}
