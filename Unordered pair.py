n, k = map(int, input().split())
a = list(map(int, input().split()))

# initialize the frequency array with all zeroes
freq = [0] * k

# count the number of elements with each remainder
for ai in a:
    r = ai % k
    freq[r] += 1

# count the number of pairs that sum to K or 0
count = 0
for i in range(1, k//2+1):
    if i != k-i:
        count += freq[i] * freq[k-i]
    else:
        count += freq[i] * (freq[i]-1) // 2
count += freq[0] * (freq[0]-1) // 2

print(count)
