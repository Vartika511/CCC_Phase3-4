#include <bits/stdc++.h> 

using std :: cin;
using std :: cout; 
using std :: vector; 

constexpr int M = 2e5 + 5; 
constexpr int INF = 0x3f3f3f3f; 

typedef long long ll; 
typedef unsigned long long ull; 
typedef double db; 

inline int read() {
    int f = 1, s = 0; char ch = getchar(); 
    while(!isdigit(ch)) (ch == '-') && (f = -1), ch = getchar(); 
    while(isdigit(ch)) s = s * 10 + ch - '0', ch = getchar(); 
    return f * s; 
}

namespace Solver {
    int n, cnt[M]; 
    char str[M]; 
    inline void mian() {
        scanf("%s", str + 1), n = strlen(str + 1); ll ans = (ll)n * (n + 1) / 2; 
        for(int i = 1; i <= n; ++i) cnt[str[i] - 'a'] ++;
        for(int i = 0; i < 26; ++i) ans -= (ll)cnt[i] * (cnt[i] - 1) / 2 + cnt[i]; 
        cout << ans + 1; 
    }
} ; 


int main() 
{
    Solver :: mian(); 
    return 0; 
}
