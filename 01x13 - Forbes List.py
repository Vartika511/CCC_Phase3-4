n=int(input())
l=[]
for i in range(n):
    l.append(int(input()))
    if len(l)<3:
        print(-1)
    else:
        if len(l)==3:
            l.sort()
            a=l[-1]
            b=l[-2]
            c=l[-3]
        else:
            if a<l[-1]:
                t1=a
                t2=b
                a=l[-1]
                b=t1
                c=t2
            elif b<l[-1]:
                t=b
                b=l[-1]
                c=t
            elif c<l[-1]:
                c=l[-1]
        print(a,b,c)
