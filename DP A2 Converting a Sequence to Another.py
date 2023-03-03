n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

dp = [[0] * (m+1) for _ in range(n+1)]

# initialize first row and column
for i in range(n+1):
    dp[i][0] = i
for j in range(m+1):
    dp[0][j] = j

# fill the rest of the table
for i in range(1, n+1):
    for j in range(1, m+1):
        if a[i-1] == b[j-1]:
            dp[i][j] = dp[i-1][j-1]
        else:
            dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])

print(dp[n][m])
