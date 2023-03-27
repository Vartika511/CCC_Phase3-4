def dfs(cell, depth, visited, cycleLength, edge):
    visited[cell] = True
    if edge[cell] == -1:
        return
    nextCell = edge[cell]
    if visited[nextCell]:
        cycleLength[cell] = depth - cycleLength[nextCell]
    else:
        dfs(nextCell, depth+1, visited, cycleLength, edge)
        cycleLength[cell] = cycleLength[nextCell]
        
def findLargestCycle(N, edge):
    visited = [False]*N
    cycleLength = [0]*N
    for i in range(N):
        if not visited[i]:
            dfs(i, 1, visited, cycleLength, edge)
    return max(cycleLength)
    
N = int(input())
edge = list(map(int, input().split()))
print(findLargestCycle(N, edge))
