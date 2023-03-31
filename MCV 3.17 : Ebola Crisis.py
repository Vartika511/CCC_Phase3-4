n=int(input())
l=[]
d={}
for i in range(n):
    x=list(map(int,input().split()))
    l.append(x)
    for j in x:
        if j in [2,3,4,5]:
            d[j]=d.get(j,0)+1
for i in [2,3,4,5]:
    print(d.get(i,0),end=' ')
print()
d1={2:0,3:0,4:0,5:0}
for i in range(n):
    for j in range(n):
        m=0
        if l[i][j]==1:
            if i<n-1:
                m=max(l[i+1][j],m)
            if j<n-1:
                m=max(m,l[i][j+1])
            if i>0:
                m=max(m,l[i-1][j])
            if j>0:
                m=max(m,l[i][j-1])
            if i>0 and j>0:
                m=max(m,l[i-1][j-1])
            if i<n-1 and j<n-1:
                m=max(m,l[i+1][j+1])
            if i>0 and j<n-1:
                m=max(m,l[i-1][j+1])
            if i<n-1 and j>0:
                m=max(m,l[i+1][j-1])
        if m in [2,3,4,5]:
            d1[m]+=1
for i in [2,3,4,5]:
    print(d1[i],end=' ')
