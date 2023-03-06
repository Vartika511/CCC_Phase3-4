#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_cost_to_convert(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int m = b.size();
    int x, y, z;
    cin >> x >> y >> z;

    // Initialize dp table
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Base cases
    for (int i = 1; i <= n; i++) {
        dp[i][0] = i * y;
    }
    for (int j = 1; j <= m; j++) {
        dp[0][j] = j * x;
    }

    // Fill the rest of the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min({dp[i - 1][j] + y,      // deletion
                                dp[i][j - 1] + x,      // insertion
                                dp[i - 1][j - 1] + z}); // substitution
            }
        }
    }

    return dp[n][m];
}

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    cout << min_cost_to_convert(a, b) << endl;
    return 0;
}
