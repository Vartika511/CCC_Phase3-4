
#the string
astr=input()

#substring
pattern=input()

def num_of_patterns(astr,pattern):
    astr, pattern = astr.strip(), pattern.strip()
    if pattern == '': return 0

    ind, count, start_flag = 0,0,0
    while True:
        try:
            if start_flag == 0:
                ind = astr.index(pattern)
                start_flag = 1
            else:
                ind += 1 + astr[ind+1:].index(pattern)
            count += 1
        except:
            break
    ind1, count1, start_flag1 = 0,0,0
    while True:
        try:
            if start_flag1 == 0:
                ind = pattern.index(astr)
                start_flag1 = 1
            else:
                ind += 1 + pattern[ind+1:].index(astr)
            count1 += 1
        except:
            break
    print(max(count,count1))
    return 0
num_of_patterns(astr,pattern)
