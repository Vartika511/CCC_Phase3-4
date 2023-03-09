n=int(input())
a=list(map(int,input().split()))
m=s=0
for i in a:
    if i==0:s=0
    else: s+=1;m=max(m,s)
print(m)
