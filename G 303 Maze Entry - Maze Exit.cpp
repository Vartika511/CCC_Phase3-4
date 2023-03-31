#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> edges(n);
    for (int i = 0; i < n; i++) {
        cin >> edges[i];
    }

    vector<int> incoming(n, 0);
    for (int i = 0; i < n; i++) {
        if (edges[i] != -1) {
            incoming[edges[i]]++;
        }
    }

    int maxIndex = -1, maxCount = -1;
    for (int i = 0; i < n; i++) {
        if (incoming[i] > maxCount) {
            maxCount = incoming[i];
            maxIndex = i;
        }
    }

    cout << maxIndex << endl;

    return 0;
}
