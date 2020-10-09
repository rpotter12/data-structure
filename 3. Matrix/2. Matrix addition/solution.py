t = int(input())
for i in range(t):
    n = int(input())
    a1 = []
    for i in range(0, n):
        temp = []
        for j in range(0, n):
            temp.append(int(input()))
        a1.append(temp)
    a2 = []
    for i in range(0, n):
        temp = []
        for j in range(0, n):
            temp.append(int(input()))
        a2.append(temp)
    for i in range(0, n):
        for j in range(0, n):
            a1[i][j] = a1[i][j] + a2[i][j]
    for i in range(0, n):
        for j in range(0, n):
            print(a1[i][j], end=' ')
        print()
