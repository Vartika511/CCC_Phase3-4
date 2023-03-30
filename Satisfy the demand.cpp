#include <bits/stdc++.h>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,i,j,k,a[1000000],d[1000000],c[1000000],l=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i]>>d[i];
    for(i=0;i<n;i++)
        c[l++]=a[i];
    for(i=0;i<n;i++)
        c[l++]=d[i];
    sort(c,c+l);
    //for(i=0;i<l;i++)
      //  cout<<c[i]<<" ";
    
    i=0;
    j=0;
    int count=0,m=-1,x=0;
    while(i<n&&j<n)
    {
        if(c[x]==a[i])
        {
            i++;
            x++;
            count++;
            m=max(m,count);
        }
        else if(c[x]==d[j])
        {
            j++;
            x++;
            count--;
        }
    }
    if(m<=k)
        cout<<"yes";
    else cout<<"no";
    
    return 0;
}
