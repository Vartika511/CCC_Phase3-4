def findMaxEntryPoints(N, edge):
    inDegree = [0]*N
    for i in range(N):
        if edge[i] != -1:
            inDegree[edge[i]] += 1
    return inDegree.index(max(inDegree))

N = int(input())
edge = list(map(int, input().split()))
print(findMaxEntryPoints(N, edge))
