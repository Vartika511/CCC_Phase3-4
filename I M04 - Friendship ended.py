s = input()
goodbye = "Goodbye"

i, j = 0, 0

while j < len(goodbye) and i < len(s):
    if s[i] == goodbye[j]:
        j += 1
    i += 1

if j == len(goodbye):
    print("Yes")
else:
    print("No")
