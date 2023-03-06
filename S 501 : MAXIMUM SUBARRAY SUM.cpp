#include <iostream>
#include <climits>
using namespace std;

int main() {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        int max_sum_contig = INT_MIN,sum = 0;
        for(int i=0; i<n; i++) {
            sum += a[i];
            max_sum_contig = max(max_sum_contig, sum);
            if(sum < 0) {
                sum = 0;
            }
           
        }
        cout << max_sum_contig;
    return 0;
}
