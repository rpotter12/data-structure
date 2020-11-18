def counting(s, tar):
    s = s.replace(' ', '')
    sdic = [0]*26
    for i in s:
        sdic[ord(i)-ord('a')] += 1
    tardic = [0]*26
    for i in tar:
        tardic[ord(i)-ord('a')] += 1
    mini = 1000
    for i, num in enumerate(sdic):
        if tardic[i] == 0:
            sdic == 0
            continue
        num = num//tardic[i]
        if num<mini:
            mini = num
    return mini

t = int(input())
for _ in range(t):
    s = str(input())
    tar = str(input())
    print(counting(s.lower(), tar))
