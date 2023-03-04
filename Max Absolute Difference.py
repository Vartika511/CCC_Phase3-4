
def maxDistance(array):
    
    max1 = -2147483648
    min1 = +2147483647
    max2 = -2147483648
    min2 = +2147483647

    for i in range(len(array)):

        max1 = max(max1, array[i] + i)
        min1 = min(min1, array[i] + i)
        max2 = max(max2, array[i] - i)
        min2 = min(min2, array[i] - i)
    return max(max1 - min1, max2 - min2)

n=int(input())
array = list(map(int,input().split()))

print(maxDistance(array))
