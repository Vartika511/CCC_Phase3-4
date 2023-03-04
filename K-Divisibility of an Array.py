n, k = map(int, input().split())
a = list(map(int, input().split()))
remainder_counts = {}
for i in range(k):
    remainder_counts[i] = 0
for i in range(n):
    remainder_counts[a[i] % k] += 1
count = 0
for i in range(1, k//2+1):
    if i != k-i:
        count += remainder_counts[i] * remainder_counts[k-i]
count += (remainder_counts[0] * (remainder_counts[0]-1)) // 2
if k % 2 == 0:
    count += (remainder_counts[k//2] * (remainder_counts[k//2]-1)) // 2
print(count)
