n = int(input())
ratings = list(map(int, input().split()))

# initialize candies array with 1 candy for each child
candies = [1] * n

# scan from left to right and update candies for increasing rating
for i in range(1, n):
    if ratings[i] > ratings[i-1]:
        candies[i] = candies[i-1] + 1

# scan from right to left and update candies for decreasing rating
for i in range(n-2, -1, -1):
    if ratings[i] > ratings[i+1]:
        candies[i] = max(candies[i], candies[i+1]+1)

# output total candies needed
print(sum(candies))
