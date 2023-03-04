from bisect import bisect_left

# Function to find longest Longest Increasing Subsequence Length
def LongestIncreasingSubsequenceLength(v):
    n = len(v)
    if n == 0: # boundary case
        return 0

    tail = [0] * n # vector to store the tail elements
    length = 1 # always points empty slot in tail
    tail[0] = v[0]

    for i in range(1, n):
    
        # Do binary search for the element in the range from begin to begin + length
        j = bisect_left(tail, v[i], 0, length)

        # If not present change the tail element to v[i]
        if j == length:
            tail[length] = v[i]
            length += 1
        else:
            tail[j] = v[i]

    return length

n=int(input())
v = list(map(int,input().split()))
v = [-x for x in v] # Making all elements negative

print(LongestIncreasingSubsequenceLength(v)-1)
