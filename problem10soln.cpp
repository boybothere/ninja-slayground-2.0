vector < int > getFrequencies(vector < int > & v) {
  unordered_map < int, int > m;
  for (int i = 0; i < v.size(); i++) {
    m[v[i]]++;
  }
  int high = INT_MAX, low = INT_MAX, maxi = INT_MIN, mini = INT_MAX;
  for (auto it: m) {
    if (it.second > maxi || (it.second == maxi && it.first < high)) {
      high = it.first;
      maxi = it.second;
    }
  }
  for (auto it: m) {
    if (it.second < mini || (it.second == mini && it.first < low)) {

      low = it.first;
      mini = it.second;

    }
  }
  return {high,low};
}