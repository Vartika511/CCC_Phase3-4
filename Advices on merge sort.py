import sys


n = int(input().strip())
unsorted = []
unsorted_i = 0
for unsorted_i in range(n):
    unsorted_t = str(input().strip())
    unsorted.append(unsorted_t)
for v in sorted(unsorted, key = lambda v: int(v)):
    print(v)
