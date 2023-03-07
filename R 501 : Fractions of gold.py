from typing import List, Tuple

class ItemValue:
    def __init__(self, wt: int, val: int, ind: int):
        self.wt = wt
        self.val = val
        self.ind = ind
        self.cost = val/wt
 
def getMaxValue(wt: List[int], val: List[int], capacity: int) -> float:
    n = len(wt)
    iVal = [ItemValue(wt[i], val[i], i) for i in range(n)]
    iVal.sort(key=lambda x: x.cost, reverse=True)
    totalValue = 0
    for i in iVal:
        curWt = int(i.wt)
        curVal = int(i.val)
        if capacity - curWt >= 0:
            capacity -= curWt
            totalValue += curVal
        else:
            fraction = capacity / curWt
            totalValue += curVal * fraction
            capacity = int(capacity - (curWt * fraction))
            break
    if capacity > 0:
        return -1
    return totalValue
 
if __name__ == "__main__":
    n, capacity = map(int, input().split())
    wt = []
    val = []
    for i in range(n):
        w, v = map(int, input().split())
        wt.append(w)
        val.append(v)
    maxValue = getMaxValue(wt, val, capacity)
    if maxValue < 0:
        print("-1")
    else:
        print("{:.12f}".format(maxValue))
