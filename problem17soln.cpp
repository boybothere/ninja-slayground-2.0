int upperBound(vector<int> &arr, int x, int n) {
  int l = 0, h = n - 1, ans = n;
  while (l <= h) {
    int mid = (l + h) / 2;
    if (arr[mid] > x) {
      ans = mid;
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}
