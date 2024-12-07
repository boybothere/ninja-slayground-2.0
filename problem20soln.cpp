#include <bits/stdc++.h>
vector<long long> findrow(int n) {
  long long ans = 1;
  vector<long long> temp;
  temp.push_back(1);
  for (int c = 1; c < n; c++) {
    ans *= (n - c);
    ans /= c;
    temp.push_back(ans);
  }
  return temp;
}
vector<vector<long long int>> printPascal(int n) {
  vector<vector<long long>> ans;
  for (int i = 1; i <= n; i++) {
    ans.push_back(findrow(i));
  }
  return ans;
}
