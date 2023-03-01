n = int(input())
arr = list(map(int, input().split()))

arr.sort()

prod1 = arr[n-1] * arr[n-2] * arr[n-3]
prod2 = arr[0] * arr[1] * arr[n-1]

print(max(prod1, prod2))
