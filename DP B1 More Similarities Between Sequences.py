n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

# Initialize a table to store the lengths of longest common subsequence
table = [[0] * (m + 1) for _ in range(n + 1)]

# Fill the table using dynamic programming approach
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if a[i - 1] == b[j - 1]:
            table[i][j] = table[i - 1][j - 1] + 1
        else:
            table[i][j] = max(table[i - 1][j], table[i][j - 1])

# The maximum length of common subsequence is the answer
print(table[n][m])
