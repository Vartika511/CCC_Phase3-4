#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] <= x) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans + 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    for (int i = 0; i < m; i++) {
        cout << binary_search(a, n, b[i]) << " ";
    }
    return 0;
}
