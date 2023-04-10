from collections import deque

n = int(input())
adj = [[] for _ in range(n+1)]

# Read edges of the tree
for i in range(n-1):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)

d = int(input())

# Breadth-first search
q = deque([1])  # start from root node
level = 0
count = 0
visited = [False] * (n+1)
visited[1] = True

while q:
    size = len(q)
    level += 1
    if level == d:
        count = size
        break
    for _ in range(size):
        node = q.popleft()
        for neighbor in adj[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                q.append(neighbor)

print(count)
