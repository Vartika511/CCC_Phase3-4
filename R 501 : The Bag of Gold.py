from typing import List, Tuple

class ItemValue:
    def __init__(self, wt: int, val: int, ind: int):
        self.wt = wt
        self.val = val
        self.ind = ind
        self.cost = val / wt

def get_max_value(items: List[Tuple[int, int]], capacity: int) -> float:
    item_values = []
    for i in range(len(items)):
        w, v = items[i]
        item_values.append(ItemValue(w, v, i))
    item_values.sort(key=lambda x: x.cost, reverse=True)
    total_value = 0
    for item in item_values:
        if capacity >= item.wt:
            capacity -= item.wt
            total_value += item.val
        else:
            fraction = capacity / item.wt
            total_value += item.val * fraction
            capacity = 0
            break
    if capacity > 0:
        return -1
    return total_value

if __name__ == '__main__':
    n, capacity = map(int, input().split())
    items = []
    for i in range(n):
        w, v = map(int, input().split())
        items.append((w, v))
    max_value = get_max_value(items, capacity)
    if max_value < 0:
        print("-1")
    else:
        print("{:.12f}".format(max_value))
