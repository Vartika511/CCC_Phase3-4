str1 = input()
str2 = input()
count = 0

# Find the length of the strings
len1 = len(str1)
len2 = len(str2)

# Search for occurrences of str2 in str1
if len1 > len2:
    for i in range(len1 - len2 + 1):
        if str1[i:i+len2] == str2:
            count += 1
# Search for occurrences of str1 in str2
else:
    for i in range(len2 - len1 + 1):
        if str2[i:i+len1] == str1:
            count += 1

# Print the count of occurrences
print(count)
