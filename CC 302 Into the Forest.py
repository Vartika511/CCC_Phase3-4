def find(x):
    if x != parent[x]:
        parent[x] = find(parent[x])
    return parent[x]
if __name__ == '__main__':
    n, m = map(int, input().split())
    parent = [i for i in range(n + 1)]
    size = [1] * (n + 1)
    for _ in range(m):
        u, v = map(int, input().split())
        pu, pv = find(u), find(v)
        if pu != pv:
            parent[pu] = pv
            size[pv] += size[pu]
    print(max(size), min(size[i] for i in range(1, n + 1) if parent[i] == i), sum(parent[i] == i for i in range(1, n + 1)))
