def gcode(a, n, minlen, code, j):
    if j>minlen:
        return code
    temp = a[0]
    for i in range(1, n):
        if a[i][j] != temp[j]:
            return code
    code += temp[j]
    z = gcode(a, n, minlen, code, j+1)
    return z


def getcode(a, n):
    minlen = len(a[0])
    for i in range(1, n):
        if len(a[i])<minlen:
            minlen = len(a[i])
    temp = a[0]
    j = 0
    code = ""
    return gcode(a, n, minlen, code, j)

t = int(input())
for _ in range(t):
    a = list(map(str, input().split()))
    print(getcode(a, len(a)))
