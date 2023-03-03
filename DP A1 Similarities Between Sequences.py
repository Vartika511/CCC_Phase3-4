def longest_common_subsequence_length(arr1, arr2):
    dp = [[0] * (len(arr2) + 1) for _ in range(len(arr1) + 1)]

    max_len = 0
    for i in range(1, len(arr1) + 1):
        for j in range(1, len(arr2) + 1):
            if arr1[i-1] == arr2[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
                max_len = max(max_len, dp[i][j])
            else:
                dp[i][j] = 0

    return max_len

a=int(input())
list1 = [int(x) for x in input().split()]
b=int(input())
list2 = [int(x) for x in input().split()]
print(longest_common_subsequence_length(list1, list2))
