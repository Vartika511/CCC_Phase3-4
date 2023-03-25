def dfs(node, visited, graph):
    visited[node] = True
    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(neighbor, visited, graph)

# Reading input from user
n, m = map(int, input().split())

# Creating an empty graph
graph = [[] for _ in range(n+1)]

# Reading edges and populating the graph
for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

# Reading the head node
head = int(input())

# Initializing the visited list with all elements set to False
visited = [False] * (n+1)

# Starting a Depth First Search (DFS) from the head node
dfs(head, visited, graph)

# Counting the number of unreachable nodes
unreachable = visited.count(False) - 1  # Subtracting 1 to exclude the head node

# Printing the result
print(unreachable)
