#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void merge(vector<int> &arr, int le, int mid, int ri) {
  int i = le;
  int j = mid + 1;
  vector<int> temp;

  while (i <= mid && j <= ri) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      cnt += mid - i + 1;
      j++;
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= ri) {
    temp.push_back(arr[j]);
    j++;
  }

  for (int k = le; k <= ri; k++) {
    arr[k] = temp[k - le];
  }
}

void mergeSort(vector<int> &arr, int le, int ri) {
  if (le >= ri) {
    return;
  }
  int mid = (le + ri) / 2;
  mergeSort(arr, le, mid);
  mergeSort(arr, mid + 1, ri);
  merge(arr, le, mid, ri);
}

int numberOfInversions(vector<int> &a, int n) {
  cnt = 0;
  mergeSort(a, 0, n - 1);
  return cnt;
}
