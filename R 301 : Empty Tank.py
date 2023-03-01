n = int(input())
gas = list(map(int, input().split()))
cost = list(map(int, input().split()))
def can_complete_circuit(gas, cost):
    n = len(gas)
    start, curr_gas, total_gas = 0, 0, 0
    
    for i in range(n):
        curr_gas += gas[i] - cost[i]
        total_gas += gas[i] - cost[i]
        
        if curr_gas < 0:
            start = i + 1
            curr_gas = 0
    
    if total_gas < 0 or start == n:
        return -1
    else:
        return start


print(can_complete_circuit(gas, cost))
