n = int(input())
a = list(map(int, input().split()))
k = int(input())

a.sort()

count = 0
for i in range(n):
    complement = k - a[i]
    left = 0
    right = n - 1
    while left <= right:
        mid = (left + right) // 2
        if a[mid] == complement:
            count += 1
            break
        elif a[mid] < complement:
            left = mid + 1
        else:
            right = mid - 1
print(count)
