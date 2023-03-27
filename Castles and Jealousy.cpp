#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, c;
    cin >> n >> c;
    int castles[n];
    for (int i = 0; i < n; i++) {
      cin >> castles[i];
    }
    sort(castles, castles + n);
    int lo = 0, hi = castles[n - 1] - castles[0];
    while (lo < hi) {
      int mid = lo + (hi - lo + 1) / 2;

      int last_castle = castles[0];
      int assigned = 1, temp = 0;
      for (int i = 1; i < n; i++) {
        if (castles[i] - last_castle >= mid) {
          last_castle = castles[i];
          assigned++;
          if (assigned == c) {
            temp = 1;
          }
        }
      }

      if (temp == 1) {
        lo = mid;
      } else {
        hi = mid - 1;
      }
    }
    cout << lo << endl;
  }
  return 0;
}
