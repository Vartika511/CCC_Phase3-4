def solve(arr):
    dp = [0] * (max(arr) + 1)
    for i in arr:
        dp[i] += i
    for i in range(2, len(dp)):
        dp[i] = max(dp[i - 1], dp[i - 2] + dp[i])
    return dp[-1]
if __name__ == '__main__':
    for _ in range(int(input())):
        input()
        arr = list(map(int, input().split()))
        print(solve(arr))
