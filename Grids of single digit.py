def is_valid_sudoku(sudoku):
    # Check rows
    for row in sudoku:
        seen = set()
        for num in row:
            if num in seen:
                return False
            seen.add(num)

    # Check columns
    for col in range(9):
        seen = set()
        for row in range(9):
            num = sudoku[row][col]
            if num in seen:
                return False
            seen.add(num)

    # Check boxes
    for box_row in range(0, 9, 3):
        for box_col in range(0, 9, 3):
            seen = set()
            for row in range(box_row, box_row+3):
                for col in range(box_col, box_col+3):
                    num = sudoku[row][col]
                    if num in seen:
                        return False
                    seen.add(num)

    return True


# Read input
T = int(input())
for _ in range(T):
    sudoku = [list(map(int, input().split())) for _ in range(9)]

    # Check if sudoku is valid
    if is_valid_sudoku(sudoku):
        print("Valid")
    else:
        print("inValid")
