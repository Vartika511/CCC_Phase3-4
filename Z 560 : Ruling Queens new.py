N = int(input())


board = [[0]*N for _ in range(N)]

def is_attack(i, j):
  
    for k in range(0,N):
        if board[i][k]==1 or board[k][j]==1:
            return True
    
    for k in range(0,N):
        for l in range(0,N):
            if (k+l==i+j) or (k-l==i-j):
                if board[k][l]==1:
                    return True
    return False

def N_queen(n):
    #if n is 0, solution found
    if n==0:
        return True
    for i in range(0,N):
        for j in range(0,N):
            
            if (not(is_attack(i,j))) and (board[i][j]!=1):
                board[i][j] = 1
#                
                if N_queen(n-1)==True:
                    return True
                board[i][j] = 0

    return False

N_queen(N)
# for i in board:
for i in range(0,N):
    for j in range(0,N):
    	print (board[i][j],end=' ')
    print()
