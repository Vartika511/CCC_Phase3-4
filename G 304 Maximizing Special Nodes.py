import math

n = 0
g = [[] for i in range(1005)]
rg = [[] for i in range(1005)]

def solve(G):
    a = [0]*1005
    for i in range(1, n+1):
        for node in G[i]:
            if not G[node]:
                a[i] = 1
    ans = sum(a[1:n+1])
    return ans

e = 0
n, e = map(int, input().split())
for i in range(1, e+1):
    x, y = map(int, input().split())
    g[x].append(y)
    rg[y].append(x)
a = solve(g)
b = solve(rg)
print(max(a, b))
