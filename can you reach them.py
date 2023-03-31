from collections import defaultdict

def dfs(node, graph, visited):
    visited[node] = True
    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(neighbor, graph, visited)

n, m = map(int, input().split())
graph = defaultdict(list)
for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)
head = int(input())

visited = [False] * (n+1)
dfs(head, graph, visited)

unreachable = 0
for i in range(1, n+1):
    if not visited[i]:
        unreachable += 1

print(unreachable)
