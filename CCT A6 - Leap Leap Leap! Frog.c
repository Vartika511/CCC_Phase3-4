#include <stdio.h>
#include <stdlib.h>

int LS(int v[], int n) {
    if (n == 0) {
        return 0;
    }

    int* tail = (int*) malloc(n * sizeof(int));
    int length = 1;
    tail[0] = v[0];

    for (int i = 1; i < n; i++) {
        int j = 0;
        int left = 0, right = length;
        while (left < right) {
            int mid = (left + right) / 2;
            if (tail[mid] < v[i]) {
                j = mid + 1;
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if (j == length) {
            tail[length] = v[i];
            length += 1;
        } else {
            tail[j] = v[i];
        }
    }

    free(tail);

    return length - 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        v[i] = -v[i];
    }
    printf("%d\n", LS(v, n));

    return 0;
}
