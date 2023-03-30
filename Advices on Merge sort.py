def bigSorting(unsorted):
    return sorted(unsorted, key=int)
if __name__ == '__main__':
    n = int(input())
    unsorted = []
    for _ in range(n):
        unsorted_item = input()
        unsorted.append(unsorted_item)
    result = bigSorting(unsorted)
    for i in result:
        print(i)
