def dfs(grid, i, j):
    if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] != 'T':
        return
    grid[i][j] = 'V'  # mark cell as visited
    dfs(grid, i+1, j)  # explore down
    dfs(grid, i-1, j)  # explore up
    dfs(grid, i, j+1)  # explore right
    dfs(grid, i, j-1)  # explore left

n = int(input())
grid = [list(input().strip()) for _ in range(n)]

num_forests = 0
for i in range(n):
    for j in range(n):
        if grid[i][j] == 'T':
            dfs(grid, i, j)
            num_forests += 1

print(num_forests)
