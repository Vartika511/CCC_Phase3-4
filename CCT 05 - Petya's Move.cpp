#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
    char cActual[20],cRemember[20];
    cin>>cActual;
    cin>>cRemember;
    int caP=0,caM=0,crP=0,crM=0,cQM=0;
    for(int i=0;i<sizeof(cActual);i++)
    {
        if(cActual[i]=='+')
            caP++;
            
        if(cActual[i]=='-')
            caM++;
            
        if(cRemember[i]=='+')
            crP++;
        
        if(cRemember[i]=='-')
            crM++;
            
        if(cRemember[i]=='?')
            cQM++;
    }
    
    int temp = (caP-caM)-(crP-crM);
    
    
    if((temp+cQM)%2!=0 || cQM<abs(temp))
        cout<<0;
    
    else
        {

        int m = (cQM+abs(temp))/2 ; 

        int c = 1 ;

        for(int i=0;i<m;i++)

            c *= cQM-i ;

        for(int i=2;i<=m;i++)

            c /= i ;

        cout<<(double)c/(1<<cQM) ;

    }
}
