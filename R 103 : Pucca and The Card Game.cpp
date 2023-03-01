#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=n-1;
    int k=1;
    int b[2]={0};
    while(i<=j){
        if(k==1)
            k=0;
        else
            k=1;
        if(a[i]<a[j]){
            b[k]+=a[j];
            j--;
        }
        else
        {
           b[k]+=a[i];
            i++;
        }
    }
    if(b[0]>=b[1]){
        cout<<"Pucca";
    }
    else
        cout<<"Garu";
    return 0;
}
