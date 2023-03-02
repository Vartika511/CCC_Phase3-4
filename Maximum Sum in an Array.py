def max_subarray_sum(arr):
    max_so_far = max_ending_here = arr[0]
    for i in range(1, len(arr)):
        max_ending_here = max(arr[i], max_ending_here + arr[i])
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far

def max_subsequence_sum(arr):
    max_sum = 0
    for num in arr:
        if num > 0:
            max_sum += num
    if max_sum == 0:
        max_sum = max(arr)
    return max_sum

t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(max_subarray_sum(arr), max_subsequence_sum(arr))
