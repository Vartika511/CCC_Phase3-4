#include <iostream>
#include <vector>

using namespace std;

int min_cost_to_convert(const vector<int>& A, const vector<int>& B) {
    int n = A.size();
    int m = B.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = j;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
               dp[i][j] = 1 + min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    int n, m;
    cin >> n;

    vector<int> A(n);
    for (auto& a : A) {
        cin >> a;
    }

    cin >> m;

    vector<int> B(m);
    for (auto& b : B) {
        cin >> b;
    }

    cout << min_cost_to_convert(A, B) << endl;

    return 0;
}
