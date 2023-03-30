def merge_sort(arr):
    if len(arr) == 1:
        return arr, 0
    else:
        mid = len(arr) // 2
        left, inv_left = merge_sort(arr[:mid])
        right, inv_right = merge_sort(arr[mid:])
        result, inv_merge = merge(left, right)
        return result, inv_left + inv_right + inv_merge

def merge(left, right):
    result = []
    inv = 0
    i, j = 0, 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
            inv += len(left) - i
    result += left[i:]
    result += right[j:]
    return result, inv

n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))
    
result, inversions = merge_sort(arr)
print(inversions)
