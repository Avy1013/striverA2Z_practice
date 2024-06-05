#include <iostream>
using namespace std;

void printno(int N) {
  // Base Case: If N is 0, return (no numbers to print)
  if (N == 0) {
    return;
  }

  // Recursive Call: Print numbers from 1 to N-1
  printno(N - 1);

  // Print the current number (N) after recursive calls
  cout << N << " ";
}


int main() {
    int n=5;
    // cin >> n;
    printno(n);
    return 0;
}