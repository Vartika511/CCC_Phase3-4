n = int(input())
rank = list(map(int, input().split()))

ans = [0] * n

for i in range(n):
    cnt = ans[:i].count(0)
    ans[i] = rank[i] + cnt + 1
    for j in range(i):
        if ans[j] >= ans[i]:
            ans[j] += 1

print(*ans)
