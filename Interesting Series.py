f0, f1, f2, n = map(int, input().split())

# Handle base cases
if n == 0:
    print(f0)
elif n == 1:
    print(f1)
elif n == 2:
    print(f2)
else:
    # Calculate F3 to FN using the formula
    fn_minus_1 = f2
    fn_minus_2 = f1
    fn_minus_3 = f0
    fn = 0
    for i in range(3, n+1):
        fn = fn_minus_1 ^ fn_minus_2 + fn_minus_3
        fn_minus_3 = fn_minus_2
        fn_minus_2 = fn_minus_1
        fn_minus_1 = fn

    print(fn)
