#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
int cnt[128];
 
int main() {
	ios::sync_with_stdio(0);
	string s; cin >> s;
	for(char c : s)
		cnt[c] ++;
	
	ll ans = 1;
	for(char c = 'a'; c <= 'z'; c ++)
		for(char d = c + 1; d <= 'z'; d ++)
			ans += ll(cnt[c]) * cnt[d];
	
	cout << ans << '\n';
}
