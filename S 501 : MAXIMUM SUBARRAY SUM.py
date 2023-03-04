n = int(input())
a = list(map(int, input().split()))

max_sum = a[0]
curr_sum = a[0]

for i in range(1, n):
    curr_sum = max(a[i], curr_sum + a[i])
    max_sum = max(max_sum, curr_sum)

print(max_sum)
