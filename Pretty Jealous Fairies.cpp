#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool can_assign_fairies(vector<int>& castles, int c, int d) {
    int last_castle = castles[0];
    int assigned = 1;
    for (int i = 1; i < castles.size(); i++) {
        if (castles[i] - last_castle >= d) {
            last_castle = castles[i];
            assigned++;
            if (assigned == c) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> castles(n);
        for (int i = 0; i < n; i++) {
            cin >> castles[i];
        }
        sort(castles.begin(), castles.end());
        int lo = 0, hi = castles[n-1] - castles[0];
        while (lo < hi) {
            int mid = lo + (hi - lo + 1) / 2;
            if (can_assign_fairies(castles, c, mid)) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }
        cout << lo << endl;
    }
    return 0;
}
