def binary_search(arr, x):
    """
    Binary search algorithm to find if an element x is present in the array arr
    """
    l, r = 0, len(arr)-1
    while l <= r:
        mid = (l + r) // 2
        if arr[mid] == x:
            return True
        elif arr[mid] < x:
            l = mid + 1
        else:
            r = mid - 1
    return False

N = int(input())
A = list(map(int, input().split()))
M = int(input())
C = list(map(int, input().split()))

for i in range(M):
    if binary_search(A, C[i]):
        print("Happy Halloween!")
    else:
        print("Tricky!")
