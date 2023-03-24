#include <cstdio>
#include <algorithm>
using namespace std;

int a[102];

int main() {
int i,j,m,n;
long long c,ans=0;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for (i=n-1,c=0,j=0;i>=0;--i) {
		if (j==0) {
			++c;
		}
		ans+=c*a[i];
		if (++j==m) {
			j=0;
		}
	}
	printf("%Ld\n",ans);
	return 0;
}
