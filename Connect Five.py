def check_win(board, symbol):
    # check horizontal lines
    for i in range(10):
        for j in range(6):
            if board[i][j] == symbol and board[i][j+1] == symbol and board[i][j+2] == symbol and board[i][j+3] == symbol and board[i][j+4] == '.':
                return True
            elif board[i][j] == '.' and board[i][j+1] == symbol and board[i][j+2] == symbol and board[i][j+3] == symbol and board[i][j+4] == symbol:
                return True
    # check vertical lines
    for i in range(6):
        for j in range(10):
            if board[i][j] == symbol and board[i+1][j] == symbol and board[i+2][j] == symbol and board[i+3][j] == symbol and board[i+4][j] == '.':
                return True
            elif board[i][j] == '.' and board[i+1][j] == symbol and board[i+2][j] == symbol and board[i+3][j] == symbol and board[i+4][j] == symbol:
                return True
    # check diagonal lines
    for i in range(6):
        for j in range(6):
            if board[i][j] == symbol and board[i+1][j+1] == symbol and board[i+2][j+2] == symbol and board[i+3][j+3] == symbol and board[i+4][j+4] == '.':
                return True
            elif board[i][j] == '.' and board[i+1][j+1] == symbol and board[i+2][j+2] == symbol and board[i+3][j+3] == symbol and board[i+4][j+4] == symbol:
                return True
            if board[i][j+4] == symbol and board[i+1][j+3] == symbol and board[i+2][j+2] == symbol and board[i+3][j+1] == symbol and board[i+4][j] == '.':
                return True
            elif board[i][j+4] == '.' and board[i+1][j+3] == symbol and board[i+2][j+2] == symbol and board[i+3][j+1] == symbol and board[i+4][j] == symbol:
                return True
    return False

# Input
board = [list(input().strip()) for _ in range(10)]
# Check if Niksoc can win in one move
if check_win(board, 'O'):
    print("YES")
else:
    print("NO")
