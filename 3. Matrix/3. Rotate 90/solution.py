t = int(input())
for z in range(t):
    n = int(input())

    a = []

    for i in range(0,n):
        temp = []
        for k in range(0, n):
            temp.append(int(input()))
        a.append(temp)

    m = n

    for i in range(0,m//2):
        for j in range(0, n):
            a[i][j], a[m-1-i][j] = a[m-1-i][j], a[i][j]

    for i in range(0, m):
        for j in range(0, n):
            if i>j:
                a[i][j], a[j][i] = a[j][i], a[i][j]

    for i in range(0, n):
        for j in range(0, n):
            print(a[i][j], end=' ')
        print()
