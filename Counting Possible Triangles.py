def countTriangles(arr):
    arr.sort()
    count = 0
    for i in range(len(arr)-1, 1, -1):
        l = 0
        r = i - 1
        while l < r:
            if arr[l] + arr[r] > arr[i]:
                count += r - l
                r -= 1
            else:
                l += 1
    return count % (10**9 + 7)
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    print(countTriangles(arr))
