#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int a[maxn],n,l,t;
int main()
{
    scanf("%d%d%d", &n, &l, &t);
    for(int i = 1;i <= n;i ++) scanf("%d", &a[i]);
    sort(a + 1,a + n + 1);
    int ans = 0;
    for(int i = 1;i <= n;i ++)
    {
        int ned = a[i] / l;
        if (l * ned < a[i]) ++ ned;
        t -= ned;
        if (t < 0) break;
        ans ++;
    }
    printf("%d\n", ans);
    return 0;
}
