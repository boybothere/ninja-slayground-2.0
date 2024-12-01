#include<bits/stdc++.h>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  if (n == 1) {
    cout << 1;
  }
  if (n == 2) {
    cout << 1;
  }
  int a = 0, b = 1, sum = 0;
  for (int i = 2; i <= n; i++) {
    sum = a + b;
    a = b;
    b = sum;
  }
  if (n != 1 && n != 2) {
    cout << sum;
  }

}