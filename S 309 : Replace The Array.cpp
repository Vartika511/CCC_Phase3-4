#include <bits/stdc++.h>
using namespace std;

void nextGreatest(int arr[], int size)
{
    int maxFromRight = 0;
    int n = size;
    for(int i= n-1; i>=0;i--) {
    int temp = maxFromRight;
    if(arr[i]> maxFromRight){
        maxFromRight = arr[i];
    }
    arr[i] = temp;
    }
    return;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    nextGreatest (arr, size);
    printArray (arr, size);
    return (0);
}
