#include <iostream>
#include <vector>

using namespace std;

vector<long long> lcmAndGcd(long long A, long long B) {
  long long divisor1 = A, divisor2 = B;

  // Combine checks for A == B
  if (A == B) {
    return {A, A}; // Both LCM and GCD are A
  }

  while (divisor1 != 0) {
    if (divisor1 % divisor2 == 0) {
      break;
    }
    long long temp = divisor1;
    divisor1 = divisor2;
    divisor2 = temp % divisor2;
  }

  long long gcd = divisor2;
  long long lcm = A * B / gcd;

  return {lcm, gcd};
}

int main() {
  long long a = 12;
  long long b = 18;
  vector<long long> result = lcmAndGcd(a, b);

  cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;

  return 0;
}
