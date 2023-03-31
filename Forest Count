def dfs(i,j):
    if i<0 or j<0 or i>=n or j>=n or a[i][j]=='W':
        return
    a[i][j]='W'
    dfs(i+1,j)
    dfs(i-1,j)
    dfs(i,j+1)
    dfs(i,j-1)
n=int(input())
a=[]
for i in range(n):
    a.append(list(input()))
c=0
for i in range(n):
    for j in range(n):
        if a[i][j]=='T':
            dfs(i,j)
            c+=1
print(c)
