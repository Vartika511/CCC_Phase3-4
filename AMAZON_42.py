n, k = map(int, input().split())
prices = list(map(int, input().split()))

if k >= n//2:
    # If k is large enough to allow making all possible transactions,
    # we can just compute the total profit from buying low and selling high.
    total_profit = 0
    for i in range(1, n):
        if prices[i] > prices[i-1]:
            total_profit += prices[i] - prices[i-1]
    print(total_profit)
else:
    # If k is smaller than n//2, we use dynamic programming to compute the
    # maximum profit that can be obtained by making at most k transactions.
    dp = [[0] * n for _ in range(k+1)]
    for i in range(1, k+1):
        max_diff = -prices[0]
        for j in range(1, n):
            dp[i][j] = max(dp[i][j-1], prices[j] + max_diff)
            max_diff = max(max_diff, dp[i-1][j] - prices[j])
    print(dp[k][n-1])
