#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include <queue>
#include <vector>
#include<bitset>
#include<map>
#include<deque>
using namespace std;
typedef long long LL;
const int maxn = 1e4+5;
const int mod = 77200211+233;
typedef pair<int,int> pii;
#define X first
#define Y second
#define pb push_back
//#define mp make_pair
#define ms(a,b) memset(a,b,sizeof(a))
const int inf = 0x3f3f3f3f;
#define lson l,m,2*rt
#define rson m+1,r,2*rt+1
typedef long long ll;
#define N 1000010
struct node {
    double a,b;
}square[10005];

int cmp(node x,node y){
    return x.b>y.b;
}

int main(){
#ifdef LOCAL
    freopen("in.txt","r",stdin);
#endif // LOCAL
    int n;
    double l,w;
    double r,p;
    while(~scanf("%d%lf%lf",&n,&l,&w)){
        int tot=0;
        for(int i=0;i<n;i++){
            scanf("%lf%lf",&p,&r);
            if(r<=w/2) continue;
            square[tot].a=p-sqrt(r*r-w*w/4);
            square[tot++].b=p+sqrt(r*r-w*w/4);
        }

        sort(square,square+tot,cmp);

        double st=0;
        int ans=0;

        while(st<l){
            int i;
            for(i=0;i<tot;i++){
                if(square[i].a<=st && square[i].b>st){
                    st=square[i].b;
                    ans++;
                    break;
                }
            }
            if(i==tot) break;
        }
        if(st<l){
            puts("-1");
        }else{
            printf("%d\n",ans);
        }
    }
    return 0;
}
