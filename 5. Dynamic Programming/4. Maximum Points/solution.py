def getpoints(a, pick, points, rpick):
    if len(a)==0:
        return points
    if rpick == 'nd':
        if a[0]>a[-1]:
            a.pop(0)
            rpick = 'f'
        else:
            a.pop()
            rpick = 'b'
    elif rpick == 'f':
        a.pop()
        rpick = 'b'
    else:
        a.pop(0)
        rpick = 'f'
    if len(a)==0:
        return points
    if pick == 'f':
        points = points + a[-1]
        a.pop()
        pick = 'b'
    else:
        points = points + a[0]
        a.pop(0)
        pick = 'f'
    return getpoints(a, pick, points, rpick)

def getmaxipoints(a, n):
    b = a.copy()
    fp = a[0]
    a.pop(0)
    fpoints = getpoints(a, 'f', fp, 'nd')
    bp = b[-1]
    b.pop()
    bpoints = getpoints(b, 'b', bp, 'nd')
    return max(fpoints, bpoints)

t = int(input())
for _ in range(t):
    a = list(map(int, input().split()))
    print(getmaxipoints(a, 4))
