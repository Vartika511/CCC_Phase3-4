#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    cin>>str;
    string str2="",str3;
    int i,j;
    for(i=1;i<=str.length();i++){
        str3="";
        str2+=str[i-1];
        //cout<<str2<<endl;
        for(j=1;j<=str.length()/i;j++)
            str3+=str2;
        //cout<<str3<<endl;
        if(str3==str)
            break;
    }
    cout<<str2;

    return 0;
}
