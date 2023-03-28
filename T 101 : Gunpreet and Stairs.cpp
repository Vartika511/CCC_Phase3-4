#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int check(int n) {
      
    
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int a=1,b=2,c=4,d=0;
    
    for(int i=3;i<n;i++){
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    
    return d;
}
int main(){
    int n;
    cin>>n;// number of stairs
    
    cout<<check(n);
        
    return 0;
}
