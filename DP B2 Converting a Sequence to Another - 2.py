n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
x, y, z = map(int, input().split())

# Initialize dp table
dp = [[0] * (m + 1) for _ in range(n + 1)]

# Base cases
for i in range(1, n + 1):
    dp[i][0] = i * y
for j in range(1, m + 1):
    dp[0][j] = j * x

# Fill the rest of the dp table
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if a[i - 1] == b[j - 1]:
            dp[i][j] = dp[i - 1][j - 1]
        else:
            dp[i][j] = min(dp[i - 1][j] + y,      # deletion
                           dp[i][j - 1] + x,      # insertion
                           dp[i - 1][j - 1] + z)  # substitution

print(dp[n][m])
