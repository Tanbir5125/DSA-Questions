#include <bits/stdc++.h>

void checkPrime(int n) {
  int count = 0;
  for (int i = 1; i <= sqrt(n); i++) {         // to reduce time complexity used i*i instead of sqrt(n)
    if (n % i == 0) { // to check if the i can divide the number completely
      count++;
      if (n / i != i) // if i is a divisor then n / i is also a divisor
        count++;
    }
  }
  if (count == 2)
    cout << "It is a Prime number" << endl;
  else
    cout << "It is not a prime number" << endl;
}

int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  checkPrime(n);
  return 0;
}
