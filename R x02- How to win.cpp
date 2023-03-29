#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,hit,t,c=0,i;
    cin>>n>>hit>>t;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
            c++;
        else if(t!=0)
        {while(arr[i]>0 && t!=0)
            {arr[i]=arr[i]-hit;
             t--;}
         if(arr[i]<=0)
         c++;}
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}
