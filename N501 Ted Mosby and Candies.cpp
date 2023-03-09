#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int m;
    cin>>m;
    int c[m];
    int l=0;
    int h = n-1;
    for(int i=0; i<m; i++) cin>>c[i];
    for(int i=0; i<m; i++){
        int key = c[i];
        int result = binarySearch(a, l, h, key);
        if(result == -1)
            cout<<"Tricky!\n";
        else cout<<"Happy Halloween!\n";
    }
    return 0;
}
