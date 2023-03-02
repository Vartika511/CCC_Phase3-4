import math
p=1
l=[int(i) for i in input().split()]
a=l[0]
b=l[1]
c=l[2]
for i in range(a,b,-1):
    p*=i
print(p%c)
