n, k = map(int, input().split())
a = list(map(int, input().split()))

freq = [0] * k
for i in a:
    freq[i % k] += 1

count = 0
for i in range(1, k//2+1):
    if i != k - i:
        count += freq[i] * freq[k-i]
count += freq[0] * (freq[0]-1) // 2
if k % 2 == 0:
    count += freq[k//2] * (freq[k//2]-1) // 2

print(count)
