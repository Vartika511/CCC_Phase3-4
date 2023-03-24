#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c;
int series(int d)
{
    if(d==0)return a;
    else if(d==1)return b;
    else if(d==2)return c;
    return series(d-1)^(series(d-2)+series(d-3));
}
int main() {
    int d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=series(d);
    printf("%d",x);
    return 0;
}
