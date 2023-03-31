def stern_brocot_fraction(path):
    a,b=0,1
    x,y=1,1
    c,d=1,0
    for move in path:
        if move == "L":
            t1=a+x
            t2=b+y
            c,d=x,y
            x,y=t1,t2
        elif move == "R":
            t1=x+c
            t2=y+d
            a,b=x,y
            x,y=t1,t2
    return "{}/{}".format(x,y)
t=int(input())
for i in range(t):
    print(stern_brocot_fraction(input().strip()))
