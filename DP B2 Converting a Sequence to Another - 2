n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
x, y, z = map(int, input().split())

dp = [[float('inf')] * (m+1) for _ in range(n+1)]
dp[0][0] = 0

for i in range(n+1):
    for j in range(m+1):
        if i > 0 and j > 0 and a[i-1] == b[j-1]:
            dp[i][j] = dp[i-1][j-1]
        else:
            if j > 0:
                dp[i][j] = min(dp[i][j], dp[i][j-1] + x)
            if i > 0:
                dp[i][j] = min(dp[i][j], dp[i-1][j] + y)
            if i > 0 and j > 0:
                dp[i][j] = min(dp[i][j], dp[i-1][j-1] + z)

print(dp[n][m])
