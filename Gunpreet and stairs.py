def count_ways(n):
    # base case: there is only one way to climb 0 or 1 step
    if n <= 1:
        return 1
    
    # base case: there are two ways to climb 2 steps (1+1 or 2)
    if n == 2:
        return 2
    
    # initialize the ways array with the base cases
    ways = [0] * (n+1)
    ways[0], ways[1], ways[2] = 1, 1, 2
    
    # fill the ways array for n >= 3
    for i in range(3, n+1):
        ways[i] = ways[i-1] + ways[i-2] + ways[i-3]
    
    # return the number of ways to climb n steps
    return ways[n]

n = int(input())
print(count_ways(n))
