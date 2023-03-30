#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    cin>>a;int count=0;
    vector<int>vec(a);
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }
    for(int i=0;i<a;i++){
        if(count%2){
            vec[i]=!vec[i];
        }
        if(vec[i]==0){
            count++;
            
        }else{
            continue;
        }
    }
    cout<<count;
    return 0;
}
