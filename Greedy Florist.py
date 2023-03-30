N, k = [int(i) for i in input().split(' ')]
ci = [int(i) for i in input().split(' ')] 

ci.sort()

if N<len(ci):
	N = len(ci)

totalCount, perPerson, curRound, totalAmount = 0, 0, 0, 0
pFlower = len(ci) - 1
while totalCount < N:
	totalAmount += ci[pFlower]*(perPerson+1)
	
	curRound += 1
	if curRound == k:
		curRound = 0
		perPerson += 1
	totalCount += 1
	pFlower -= 1

print(totalAmount)
