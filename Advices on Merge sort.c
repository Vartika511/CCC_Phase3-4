#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool compareNumbers(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;
     for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }
 
    return false;
}
int main() {
    vector<string> ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ans.push_back(s);
    }
    sort(ans.begin(),ans.end(),compareNumbers);
    for(auto &x:ans)
        cout<<x<<endl;
    return 0;
}
